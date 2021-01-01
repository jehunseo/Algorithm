//link : https://www.acmicpc.net/problem/5622
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	char str[20];
	int sum = 0;
	cin >> str;
	for(int i = 0 ; str[i] ; i++){
		int l = str[i] - 'A';
		
		if(str[i] > 'S') l--;
		if(str[i] == 'S') l--;
		if(str[i] == 'Z') l--;
		
		sum += (int)(l / 3)+3;
	}
	
	cout << sum;
	return 0;
}
