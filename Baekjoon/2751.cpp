#include <iostream>
using namespace std;
int arr[2000010];
int n, tmp;

int main() {
	// your code goes here
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> tmp;
		arr[tmp+1000000]++;
	}
	for(int i = 0 ; i < 2000010;i++){
		if(!arr[i]) continue;
		for(int j = 0 ; j < arr[i];j++){
			cout << i - 1000000 << "\n";
		}
	}
	return 0;
}
