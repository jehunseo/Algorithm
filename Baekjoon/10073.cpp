#include <iostream>
#include <stack>
using namespace std;
 
int main() {
	// your code goes here
	int a;
	cin >> a;
 
	stack<int> s;
	int sum = 0;
	for(int i = 0 ; i < a ; i++){
		int b;
		cin >> b;
 
		if(b) s.push(b);
		else s.pop();
	}
 
	while(!s.empty()){
		sum += s.top();
		s.pop();
	}
	cout << sum;
	return 0;
}
