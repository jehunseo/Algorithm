#include <iostream>
#include <list>
using namespace std;

int main() {
	// your code goes here
	char arr[100001];
	list<char> L = {};
	list<char>::iterator cur = L.begin();
	int M;
	cin >> arr >> M; 
	
	for(int i = 0 ; arr[i] ; i++){
		L.push_back(arr[i]);
	}
	
	for(int i = 0 ; i < M ; i++){
		char a, b;
		cin >> a;
		
		switch(a){
			case 'L' :
				if(cur != L.begin()) cur--;
				break;
			case 'D' : 
				if(cur != L.end()) cur++;
				break;
			case 'B' :
				if(cur != L.begin()) cur = L.erase(--cur);
				break;
			case 'P' :
				cin >> b;
				L.insert(cur, b);
		}
	}
	
	for(cur = L.begin();cur != L.end() ; cur++){
		cout << *cur;
	}
	return 0;
}
