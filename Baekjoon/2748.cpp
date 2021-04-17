#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long fibo[90];
	int n;
	cin >> n;
	fibo[0] = fibo[1] = 1;
	for(int i = 2; i < n ; i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	cout << fibo[n - 1];
	return 0;
}
