#include<iostream>
#include<cstring>
#include<stack>
using namespace std;

int main(void){
	int n;
	cin >> n;
	
	stack<int> s;
	char command[10];
	
	for(int i = 0 ; i < n ; i++){
		cin >> command;
		if(!strcmp(command, "push")){
			int a;
			cin >> a;
			s.push(a);
		}
		else if(!strcmp(command, "pop")){
			if(s.empty()) cout << "-1\n";
			else{
				int a = s.top();
				cout << a << "\n";
				s.pop();	
			}
		}
		else if(!strcmp(command, "size")) cout << s.size() << "\n";
		else if(!strcmp(command, "empty")) cout << s.empty() << "\n";
		else if(!strcmp(command, "top")){
			if(s.empty()) cout << "-1\n";
			else cout << s.top() << "\n";
		} 
	}
	
	return 0;
}
