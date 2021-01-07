#include <iostream>
#include <algorithm>
using namespace std;
int main(void){
	int n, arr[100005], x;
	
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	cin >> x;
	
	sort(arr, arr + n);
	
	int cnt = 0;
	int l = 0, r = n-1;
	while( l < r ){
		if(arr[l] + arr[r] == x) { cnt++; l++; r--; }
		else if(arr[l] + arr[r] < x) l++;
		else if(arr[l] + arr[r] > x) r--;
	}

	cout << cnt;
	return 0;
}
