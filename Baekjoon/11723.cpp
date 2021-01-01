//link : https://www.acmicpc.net/problem/11723
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int m;
	char arr[10];
	int a;
	int s[20] = {0,};
	cin >> m;
	for(int i = 0 ; i < m ; i++){
		cin >> arr;
		if(!strcmp(arr, "empty")){
			for(int j = 0 ; j < 20 ; j++) s[j] = 0;
			continue;
		}
		
		if(!strcmp(arr, "all")){
			for(int j = 0 ; j < 20 ; j++) s[j] = j+1;
			continue;
		}
		
		cin >> a;
		if(!strcmp(arr, "add") && (s[a-1] == 0)) s[a-1] = a;
		if(!strcmp(arr, "remove") && (s[a-1] == a)) s[a-1] = 0;
		if(!strcmp(arr, "check")) printf("%d\n", (s[a-1]==a));
		if(!strcmp(arr, "toggle")) s[a-1] = s[a-1] == a ? 0 : a;
	}
	return 0;
}
