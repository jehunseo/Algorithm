//link : https://www.acmicpc.net/problem/2702
#include <iostream>
using namespace std;

int gcd(int a, int b){
	return b?gcd(b, a%b):a;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	for(int i = 0; i < t ; i++){
		int a, b;
		cin >> a >> b;
		
		cout << a * b / gcd(a, b) << " ";
		cout << gcd(a, b) << "\n";
	}
	return 0;
}
