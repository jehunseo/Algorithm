//link : https://www.acmicpc.net/problem/1157
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	char str[1000000];
	char a;
	int arr[30] = {0,};
	
	cin >> str;
	for(int i = 0 ; str[i] ;i++){
		if(str[i] <= 'Z' && str[i] >= 'A'){
			arr[str[i] - 'A']++;
		}
		if(str[i] <= 'z' && str[i] >= 'a'){
			arr[str[i] - 'a']++;
		}
	}
	int max = 0, x=0;
	for(int i = 0 ; i < 30 ; i++){
		if(max < arr[i]) {
			max = arr[i];
			x = i;
		}
	}
	for(int i = x + 1 ; i < 30 ; i++){
		if(max == arr[i]){
			cout << "?";
			return 0;
		}
	}
	printf("%c", 'A' + x);
	return 0;
}
