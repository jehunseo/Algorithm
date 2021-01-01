//link : https://www.acmicpc.net/problem/1316
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	
	int a = n;
	
	for(int i = 0 ; i < n ; i ++){
		char str[110];
		cin >> str;
		for(int i = 0; str[i] ; i++){
			int j= i+1;
			
			while(str[j] == str[i]) j++;
			
			for(;str[j];j++){
				if(str[j]==str[i]) 
				{
					a--;
					goto next;
				}
			}
		}
		next:
		continue;
	}
	
	cout << a;
	return 0;
}
