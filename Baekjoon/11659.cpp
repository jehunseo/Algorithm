#include <iostream>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int arr[100005];
	int sum[100005];
	int n, m;
	
	cin >> n >> m;
	for(int i = 1 ;i <= n ; i++){
		cin >> arr[i];
	}
	
	sum[0] = 0;
	for(int i = 1 ; i <= n ; i++){
		sum[i] = arr[i] + sum[i-1];
	}
	
	for(int i = 0 ; i < m ; i++){
		int a, b;
		cin >> a >> b;
		cout << sum[b] - sum[a-1] << "\n";
	}
	return 0;
}
