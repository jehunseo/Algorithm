#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a, b;
	cin >> a >> b;
	
	int c;
	cin >> c;
	
	b += c;
	
	a = (a + (int)(b/60)) % 24;
	b = b % 60;
	cout << a << ' ' << b;
	return 0;
}
