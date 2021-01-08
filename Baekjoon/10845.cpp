#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

int main(void){
    char a[10];
    int b;
    queue<int> q;
    cin >> b;
    
    for(int i = 0 ; i < b ; i++){
    	cin >> a;
    	
    	if(!strcmp(a, "push"))
    	{
    		int c;
    		cin >> c;
    		q.push(c); 
    	}
    	else if(!strcmp(a, "pop")){
    		if(q.empty()) cout << "-1\n";
    		else{
    			cout << q.front() << "\n";
    			q.pop();
    		}
    	}
    	else if(!strcmp(a, "size")) cout << q.size() << "\n"; 
    	else if(!strcmp(a, "empty")){
    		if(q.empty()) cout << "1\n";
    		else cout << "0\n";
    	}
    	else if(!strcmp(a, "front")){
    		if(q.empty()) cout << "-1\n";
    		else cout << q.front() << "\n";
    	}
    	else if(!strcmp(a, "back")){
    		if(q.empty()) cout << "-1\n";
    		else cout << q.back() << "\n";
    	}
    }
    return 0;
}
