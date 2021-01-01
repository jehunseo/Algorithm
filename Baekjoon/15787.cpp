//link : https://www.acmicpc.net/problem/15787
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n, m;
	int arr[100000] = {0, };
	cin >> n >> m;
	
	int cnt = n;
	for(int i = 0 ; i < m ; i++){
		int a, b,c;
		cin >> a;
		switch(a){
			case 1:
				cin >> b >> c;
				arr[b-1] |= (1 << (c-1));
				break;
			case 2:
				cin >> b >> c;
				arr[b-1] &= 0xfffff ^ (1 << (c-1));
				break;
			case 3:
				cin >> b;
				arr[b-1] = (arr[b-1] << 1) & 0xfffff;
				break;
			case 4:
				cin >> b;
				arr[b-1] = (arr[b-1] >> 1) & 0xfffff;
				break;
			default : 
				break;
		}
		
	}
	for(int i = 0 ; i < n ; i++){
			for(int j = i+1 ; j < n ; j++){
				if((!(arr[i]^arr[j]))){
					cnt--;
					break;
				}
			}
	}
	cout << cnt;
	return 0;
}
