#include <iostream>
using namespace std;

int n, m;
int arr[8];

void func(int k){
	if(k>1 && arr[k - 2] > arr[k - 1]) return;
	
	if(m == k){
		for(int i = 0 ; i < m ; i++)
			cout << arr[i] << ' ';
		
		cout << "\n";
		return;
	}
	
	
	for(int i = 0 ; i < n ; i++){
		arr[k] = i+1;
		func(k+1);
	}
}

int main() {
	// your code goes here
	cin >> n >> m;
	func(0);
	return 0;
}
