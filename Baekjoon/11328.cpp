//link : https://www.acmicpc.net/problem/11328
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
	// your code goes here
	char a[1010], b[1010];
	int n;
	
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> a >> b;
		
		int len_a = strlen(a);
		int len_b = strlen(b);
		
		if(len_a != len_b ){
			cout << "Impossible\n";
			continue;
		}
		
		sort(a, a + len_a);
		sort(b, b + len_b);
		
		if(!strcmp(a, b)) cout << "Possible\n";
		else cout << "Impossible\n";
	}
	return 0;
}
