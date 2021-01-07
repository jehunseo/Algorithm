#include <iostream>
#include <list>
using namespace std;

int main(void){
	int t;
	cin >> t;
	
	for(int i = 0 ; i < t ; i++){
		char arr[1000005];
		list<char> L = {};
		list<char> ans = {};
		
		cin >> arr;
		
		for(int i = 0 ; arr[i] ; i++){
			L.push_back(arr[i]);
		}
		list<char>::iterator c = ans.begin();
		for(list<char>::iterator cur = L.begin() ; cur != L.end() ; cur++){
			switch(*cur){
				case '<':
					if(c != ans.begin())
						c--;
					break;
				case '>':
					if(c != ans.end())
						c++;
					break;
				case '-':
					if(c != ans.begin()) c = ans.erase(--c);
					break;
				default :
					ans.insert(c, *cur);
			}
		}
		for(list<char>::iterator cur = ans.begin() ; cur != ans.end() ; cur++){
			cout << *cur;
		}
		cout << "\n";
	}
	return 0;
}
