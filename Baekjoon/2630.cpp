#include <iostream>
using namespace std;

bool arr[128][128];
int n, b, w;

void func(int r, int c, int n){
	int flag = 0;
	bool color = arr[r][c];
	
	if(n == 1){
		if(color) b++;
		else w++;
		return;
	}
	
	for(int i = r ; i < r+n ; i++){
		for(int j = c ; j < c+n ; j++){
			flag += arr[i][j];
		}
	}
	
	if(flag == 0){
		w++;
		return;
	}
	else if (flag == n*n){
		b++;
		return;
	}
	else{
		func(r, c, n/2);
		func(r + n/2, c, n/2);
		func(r, c + n/2, n/2);
		func(r + n/2, c + n/2, n/2);
	}
}

int main() {
	// your code goes here
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			int tmp; cin >> tmp;
			arr[i][j] = tmp;
		}
	}
	
	func(0, 0, n);
	
	cout << w << "\n" << b; 
	return 0;
}
