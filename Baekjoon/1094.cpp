//link : https://www.acmicpc.net/problem/1094
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x;
	int cnt = 0;
	cin >> x;
	
	while(x){
		if(x&0b1) cnt++;
		x = x >> 1;
	}
	
	cout << cnt;
	return 0;
}
