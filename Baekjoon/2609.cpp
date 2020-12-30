//link : https://www.acmicpc.net/problem/2609
#include <iostream>
using namespace std;

int gcd(int a, int b){
	return b?gcd(b, a%b):a;
}

int main() {
	// your code goes here
	int a, b;
	
	cin >> a >> b;
	int g = gcd(a, b);
	
	cout << g << "\n";
	cout << a * b / g;
	return 0;
}
