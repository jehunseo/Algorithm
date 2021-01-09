#include<iostream>
#include<cstring>
#include<deque>
using namespace std;

int main(void){
	int n;
	cin >> n;
	
	deque<int> s;
	char command[15];
	
	for(int i = 0 ; i < n ; i++){
		cin >> command;
		if(!strcmp(command, "push_front")){
			int a;
			cin >> a;
			s.push_front(a);
		}
        if(!strcmp(command, "push_back")){
			int a;
			cin >> a;
			s.push_back(a);
		}
		else if(!strcmp(command, "pop_front")){
			if(s.empty()) cout << "-1\n";
			else{
				int a = s.front();
				cout << a << "\n";
				s.pop_front();	
			}
		}
		else if(!strcmp(command, "pop_back")){
			if(s.empty()) cout << "-1\n";
			else{
				int a = s.back();
				cout << a << "\n";
				s.pop_back();	
			}
		}
		else if(!strcmp(command, "size")) cout << s.size() << "\n";
		else if(!strcmp(command, "empty")) cout << s.empty() << "\n";
		else if(!strcmp(command, "front")){
			if(s.empty()) cout << "-1\n";
			else cout << s.front() << "\n";
		}
        else if(!strcmp(command, "back")){
			if(s.empty()) cout << "-1\n";
			else cout << s.back() << "\n";
		} 
	}
	
	return 0;
}
