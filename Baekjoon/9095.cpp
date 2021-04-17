#include <iostream>
using namespace std;

int main() {
	int T, n;
	int arr[12];
	cin >> T;
	
	for(int i = 0 ; i < T ; i++){
		cin >> n;
		arr[0] = 1;
		arr[1] = 2;
		arr[2] = 4;
		for(int j = 3 ; j < n ; j++){
			arr[j] = arr[j-1] + arr[j-2] + arr[j-3];
		}
		
		cout << arr[n-1] << "\n";
	}
	return 0;
}
