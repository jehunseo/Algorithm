//link : https://www.acmicpc.net/problem/13300
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int arr[2][6] = {0,};
	int n, k;
	int r = 0;
	cin >> n >> k;
	
	for(int i = 0 ; i < n ; i++){
		int s, y;
		cin >> s >> y;
		
		arr[s][y-1]++;
		if(arr[s][y-1] > k){
			r++;
			arr[s][y-1] = 1;
		}
	}
	for(int i = 0 ; i < 6 ; i++){
		for(int j = 0 ; j < 2 ; j++){
			if(!arr[j][i]) continue;
			r++;
		}
	}
	cout << r;
	return 0;
}
