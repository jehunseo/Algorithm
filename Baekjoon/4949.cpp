#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

int main() {
	// your code goes here
	char arr[105];
	
	for(;;){
		cin.getline(arr, 105);
		if(!strcmp(arr, ".")) break;
		stack<char> brr;
		
		for(int i = 0 ; arr[i] ; i++){
			if(arr[i] == '(' || arr[i] == '[') brr.push(arr[i]);
			else if(arr[i] == ')'){
				if(brr.empty() || brr.top() == '[') brr.push(arr[i]);
				else if(brr.top() == '(') brr.pop();
			}
			else if(arr[i] == ']'){
				if(brr.empty() || brr.top() == '(') brr.push(arr[i]);
				else if(brr.top() == '[') brr.pop();
			}
		}
		
		if(brr.empty()) cout << "yes\n";
		else cout << "no\n";
	}
	
	return 0;
}
