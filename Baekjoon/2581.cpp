//link : https://www.acmicpc.net/problem/2581
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int arr[10000] = {1, 1};
	int m, n;
	cin >> m >> n;
	
	for(int i = 2 ; i * i <= n ; i++){
		if(arr[i]) continue;
		for(int j = i * i ; j <= n ; j += i) arr[j] = 1;
	}
	
	int sum = 0;
	int min = 0;
	
	for(int i = m ; i <= n ; i++){
		if(!arr[i]){
			if (!min) min = i;
			sum += i;
		}
	}
	
	if(!min){
		cout << -1;
		return 0;
	}
	
	cout << sum << "\n" << min;

	return 0;
}
