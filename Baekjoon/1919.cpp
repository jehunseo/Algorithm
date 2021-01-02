//link : https://www.acmicpc.net/problem/1919
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
	// your code goes here
	char a[1010], b[1010];
	int arr_a[26] = {0,}, arr_b[26] = {0,};
	cin >> a >> b;
	
	for(int i = 0 ; i < strlen(a) ; i++) arr_a[a[i] - 'a']++;
	for(int i = 0 ; i < strlen(b) ; i++) arr_b[b[i] - 'a']++;
	
	int ans = 0;
	for(int i = 0 ; i < 26;i++){
		int k = arr_a[i] - arr_b[i];
		ans += (k > 0 ? k : -k);
	}
	cout << ans;
	return 0;
}
