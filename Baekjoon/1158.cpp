#include <iostream>
#include <list>
using namespace std;

int main() {
	// your code goes here
	list<int> arr, ans;
	list<int>::iterator cur_arr;
	
	int n, k;
	cin >> n >> k;
	for(int i = 0 ; i < n ; i++){
		arr.push_back(i + 1);
	}
	int i = 1;
    cur_arr = arr.begin();
	while(!arr.empty()){
		if( i % k == 0){
			ans.push_back(*cur_arr);
			cur_arr = arr.erase(cur_arr);
			cur_arr--;
		}
		
		i++;
        cur_arr++;
        if(cur_arr == arr.end()) {
            cur_arr = arr.begin();
        }
	}
	list<int>::iterator c = ans.begin();
	cout << '<' << *c;
	for(c++ ; c != ans.end() ; c++){
		cout << ", " << *c;
	}
	cout << '>';
	return 0;
}
