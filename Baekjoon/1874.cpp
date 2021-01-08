#include <iostream>
#include <stack>
using namespace std;

int main() {
	// your code goes here
	stack<int> in;
	stack<char> ans, ans_;
	int a;
	cin >> a;
	
	for(int i = 0, j = 0 ; i < a ; i++){
		 int b;
		 cin >> b;
		 if(b > j){
		 	while(b != j){
		 		in.push(++j);
		 		ans.push('+');
		 	} 
		 }
		 if(b == in.top()){
		 	in.pop();
		 	ans.push('-');
		 }
		 else{
		 	cout << "NO";
		 	return 0;
		 }
	}
	
	
	while(!ans.empty()){
		ans_.push(ans.top());
		ans.pop();
	}
	while(!ans_.empty()){
		cout << ans_.top() << "\n";
		ans_.pop();
	}
	return 0;
}
