#include <iostream>
#include <cmath>
using namespace std;

long long n, r, c;
long long mul, ans;
long long a, b;

int main() {
	// your code goes here
	cin >> n >> r >> c;
	
	b = pow(2, n);
	for(long long i = 1 ; i <= n ; i++){
		a = 0;
		mul = pow(4, n - i);
		
		if(r+1 > b/2){
			a += 2;
			r -= b/2;
		}
		if(c+1 > b/2){
			a += 1;
			c -= b/2;
		}
		ans += mul * a;
		b /= 2;
	}
	
	cout << ans;
	return 0;
}
