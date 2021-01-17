#include <iostream>
#include <stack>
using namespace std;

int main() {
	// your code goes here
	int n;
	char arr[55];
	
	cin >> n;
	
	for(int i = 0 ; i < n ; i++){
		cin >> arr;
		stack<char> brr;
		brr.push(arr[0]);
		for(int j = 1 ; arr[j] ; j++){
			if(brr.empty()) brr.push(arr[j]);
			else if(brr.top() == '('){
				if(arr[j] == ')') brr.pop();
				else brr.push(arr[j]);
			}
		}
		
		if(brr.empty()) cout << "YES\n";
		else cout << "NO\n";
	}
	
	return 0;
}
