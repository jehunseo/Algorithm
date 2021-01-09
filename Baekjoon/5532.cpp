#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	
	b = (b%d) ? (int)(b / d) + 1 : (int)(b / d);
	c = (c%e) ? (int)(c / e) + 1 : (int)(c / e);
	b = (b>c) ? b : c;
	cout << a - b;
	return 0;
}
