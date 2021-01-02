//link : https://www.acmicpc.net/problem/1475
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	char arr[1000000 + 10];
	int a[10] = {0,};
	cin >> arr;
	
	for(int i = 0 ; arr[i] ; i++ ){
		if(arr[i] == '9') {
			a[6]++;
			continue;
		}
		
		a[arr[i] - '0']++;
	}
	
	a[6] = ((int) a[6] / 2) + a[6] % 2;
	
	int max = 0;
	for(int i = 0 ; i < 9 ; i++){
		if(max < a[i]) max = a[i];
	}
	
	cout << max;
	return 0;
}
