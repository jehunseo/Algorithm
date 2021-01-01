//link : https://www.acmicpc.net/problem/2292
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	int ref = 1;
	int mul = 1;
	cin >> n;
	
	while(1){
		if(n <= ref) break;
		ref += mul++ * 6;
	}
	
	cout << mul;
	return 0;
}
