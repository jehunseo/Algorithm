//link : https://www.acmicpc.net/problem/2445
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	
	for(int i = 1 ; i <= n ; i++){
		for(int j = 0 ; j < i ; j++) cout << "*";
		for(int j = n ; j > i ; j--) cout << ' ';
		for(int j = n ; j > i ; j--) cout << ' ';
		for(int j = 0 ; j < i ; j++) cout << "*";
	cout << "\n";
	}
	for(int i = n-1 ; i >0 ; i--){
		for(int j = 0 ; j < i ; j++) cout << "*";
		for(int j = n ; j > i ; j--) cout << ' ';
		for(int j = n ; j > i ; j--) cout << ' ';
		for(int j = 0 ; j < i ; j++) cout << "*";
	cout << "\n";
	}
	
	return 0;
}
