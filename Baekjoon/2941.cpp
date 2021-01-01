//link : https://www.acmicpc.net/problem/2941
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	char str[110];
	cin >> str;
	int cnt = 0;
	for(int i = 0; str[i] ; i++){
		if(str[i] == 'c' && (str[i+1] == '=' || str[i+1] == '-')) i++;
		else if(str[i] == 'd')
		{
			if(str[i+1] == '-') i++;
			else if((str[i+1] == 'z' && str[i+2] == '=')) i+= 2;
		}
		else if(str[i] == 'l' && str[i+1] == 'j') i++;
		else if(str[i] == 'n' && str[i+1] == 'j') i++;
		else if(str[i] == 's' && str[i+1] == '=') i++;
		else if(str[i] == 'z' && str[i+1] == '=') i++;
		cnt++;
	}
	cout << cnt;
	return 0;
}
