// link : https://www.acmicpc.net/problem/2747
#include <iostream>
using namespace std;


int main() {
	// your code goes here
	int n;
	int a = 0, b = 1, c = 1;
	
	cin >> n;
	if( n == 0 ){
		cout << 0;
		return 0;
	}
	if( n == 1 ){
		cout << 1;
		return 0;
	}
	for(int i = 0 ; i < n - 1 ; i++){
		c = a+b;
		a = b;
		b = c;
	}
	
	cout << c;
	return 0;
}
