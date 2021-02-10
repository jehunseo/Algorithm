#include <iostream>
using namespace std;

int n, m;
int arr[8];
bool used[8];

void func(int k){
	if(k == m){
		for(int i = 0 ; i < m ; i++){
			cout << 1 + arr[i] << ' ';
		}
		cout << "\n";
		return;
	}
	
	for(int i = 0 ; i < n ; i++){
		if(!used[i]){
			arr[k] = i;
			used[i] = 1;
			func(k+1);
			used[i] = 0;
		}
	}
}

int main(void){
	cin >> n >> m;
	func(0);
}
