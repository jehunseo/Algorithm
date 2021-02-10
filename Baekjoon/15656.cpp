#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int ref[8];
int arr[8];

void func(int k){

	if(m == k){
		for(int i = 0 ; i < m ; i++)
			cout << arr[i] << ' ';
		
		cout << "\n";
		return;
	}
	
	for(int i = 0 ; i < n ; i++){
		arr[k] = ref[i];
		func(k+1);	

	}
}

int main() {
	// your code goes here
	cin >> n >> m;
	
	for(int i = 0 ; i < n ; i++){
		cin >> ref[i];
	}
	sort(ref, ref + n);
	func(0);
	return 0;
}
