//link : https://www.acmicpc.net/problem/20410
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int m, s, a, b;
	
	cin >> m >> s >> a >> b;
	
	//x1 = (a * s + c) % m
	//x2 = (a * x1 + c) % m
	for(int i = 0 ; i <= m; i++){
		for(int j = 0 ; j <= m ; j++){
			int x1 = (i * s + j) % m;
			int x2 = (i * x1 + j) % m;
			
			if(x1 == a && x2 == b){
				cout << i << ' ' << j;
				return 0;
			}
		}
	}
	return 0;
}
