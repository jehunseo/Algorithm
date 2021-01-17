#include <iostream>
#include <stack>
using namespace std;

int main() {
	// your code goes here
	char arr[2005];
	for(int i = 1 ; ;i++){
		cin >> arr;
		if(arr[0] == '-') break;
		
		stack<char> s;
		for(int j=0;arr[j];j++){
			if(arr[j] == '{') s.push(arr[j]);
			else if(arr[j] == '}'){
				if(s.empty() || s.top() == '}') s.push(arr[j]);
				else if(s.top() == '{') s.pop();
			}
		}
		
		int cnt = 0;
		while(!s.empty()){
			char a = s.top();
			s.pop();
			char b = s.top();
			s.pop();
			
			if(a == '{' && b == '}') cnt+=2;
			else cnt++;
		}
		
		cout << i << ". " << cnt << "\n";
	}
	return 0;
}
