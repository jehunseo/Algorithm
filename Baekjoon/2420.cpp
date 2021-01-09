#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long a, b;
	cin >> a >> b;
	a -= b;
	if(a < 0) a *= -1;
	cout << a;
	return 0;
}
