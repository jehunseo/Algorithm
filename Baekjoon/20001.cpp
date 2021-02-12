#include <iostream>
#include <string>
#include <stack>
using namespace std;

stack<string> s;
string str;

int main() {
	// your code goes here
	getline(cin, str);
	while(1){
		getline(cin, str);
		
		if(!str.compare("고무오리 디버깅 끝"))
			break;
		else if(!str.compare("문제"))
			s.push("문제");
		else{
			if(s.empty()){
				s.push("문제");
				s.push("문제");
			}
			else{
				s.pop();
			}
		}
	}
	
	if(s.empty()) cout << "고무오리야 사랑해";
	else cout << "힝구";
	return 0;
}
