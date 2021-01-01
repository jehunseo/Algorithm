//link : https://www.acmicpc.net/problem/2775
#include <iostream>
using namespace std;

int rec(int k, int n){
	if(k == 0) return n;
	if(n == 1) return 1;
	if(n == 2) return k+2;
	
	int sum = 0;
	for(int i=1;i<=n;i++){
		sum += rec(k-1, i);
	}
	return sum;
}

int main() {
	// your code goes here
	int T, k, n;
	
	cin >> T;
	
	for(int i = 0 ; i < T ; i++){
		cin >> k;
		cin >> n;
		
		
		cout << rec(k, n) << "\n";
	}
	
	return 0;
}
