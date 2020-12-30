//link : https://www.acmicpc.net/problem/11653
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n, a = 2;
	cin >> n;
	while(n != 1){
		while(!(n % a)){
			cout << a << "\n";
			n/=a;
		}
		a++;
	}
	return 0;
}
