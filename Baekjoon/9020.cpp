//link : https://www.acmicpc.net/problem/9020
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int arr[10000] = { 1, 1 };
	for(int i = 2; i * i <= 10000 ; i++){
		if(arr[i]) continue;
		
		for(int j = i*i ; j < 10000 ; j += i){
			arr[j] = 1;
		}
	}
	
	int idx = 0;
	
	for(int i = 0 ; i < 10000 ; i++){
		if(!arr[i]) arr[idx++] = i;
	}
	
	int t, n;
	cin >> t;
	for(int k =0 ; k < t ; k++){
		cin >> n;
		int diff = 10000, x, y;
		
		for(int i = 0 ; i < idx && arr[i] <= n ; i++){
			for(int j = i ; j < idx && arr[j] <= n ; j++){
				if(arr[i] + arr[j] == n){
					if(diff > arr[j] - arr[i]){
						x = arr[i];
						y = arr[j];
					}
				}
			}
		}
		printf("%d %d\n", x, y);
	}
	return 0;
}
