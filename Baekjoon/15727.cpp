#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin >> a;
	cout << ((int)a / 5) + (a%5 ? 1 : 0);
	return 0;
}
