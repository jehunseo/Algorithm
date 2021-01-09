#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	
	c+=d;
	b = b + (int) c / 60;
	a = a + (int) b / 60;
	c = c % 60;
	b = b % 60;
	a = a % 24;
	printf("%d %d %d", a, b, c);
	return 0;
}
