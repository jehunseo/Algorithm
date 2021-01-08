#include <iostream>
#include <cstring>
using namespace std;

int main() {
	// your code goes here
	char arr[7];
	cin >> arr;
	
	int sum =  0;
	for(int i = strlen(arr) - 1 , mul = 1 ; i >= 0 ; i--, mul*=16){
		sum += ((arr[i] >= 'A') ? (arr[i] - 'A' + 10) : (arr[i] - '0')) * mul;
	}
	
	cout << sum;
	return 0;
}
