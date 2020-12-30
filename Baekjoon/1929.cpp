//problem link : https://www.acmicpc.net/problem/1929

#include <iostream>
using namespace std;

#define MAX 1000000

int main() {
	// your code goes here
	int arr[MAX] = {1, 1};
	
	for(int i=2;i*i<MAX;i++){
		if(arr[i]) continue;
		
		for(int j=i*i;j<MAX;j += i){
			arr[j] = 1;
		}
	}
	
	int m, n;
	
	cin >> m >> n;
	
	for(int i=m;i<=n;i++){
		if(arr[i] == 0) {
			cout << i << "\n";
		}
	}
	return 0;
}
