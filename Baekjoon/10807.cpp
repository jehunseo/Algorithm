//link : https://www.acmicpc.net/problem/10807
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n, arr[210] = {0, }, v;
	cin >> n;
	
	for(int i = 0 ; i < n ; i++){
		int a = 0;
		cin >> a;
		arr[a + 100]++;
	}
	
	cin >> v;
	cout << arr[v + 100];
	
	return 0;
}
