//link : https://www.acmicpc.net/problem/2869
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a, b, v;
	int dist = 0;
	int day = 1;
	cin >> a >> b >> v;
	
	v -= b;
	cout << (int)(v/(a-b)) + ((v%(a-b)) ? 1 : 0);
	return 0;
}
