#include <iostream>
#include <stack>
using namespace std;

int main(void){
	stack<int> s;
    long long n;
    cin >> n;
    
    for(; n != 0 ; n = n >> 1 )
    	s.push(n % 2);
    
    while(!s.empty()){
    	cout << s.top();
    	s.pop();
    }
    return 0;
}
