#include <iostream>
#include <cstring>
using namespace std;

char *stk[25];
char str[30];
int cur = 0;
int n;

int main() {
	// your code goes here
	cin >> n;
	cin.getline(str, 25);
	for(int i = 0 ; i < n ; i++){
		cin.getline(str, 25);
		
		char *ptr = strtok(str, " ");
		while(ptr != NULL){
			stk[cur++] = ptr;
			ptr = strtok(NULL, " ");
		}
		
		cout << "Case #" << i+1 << ": ";
		while(cur != 0){
			cout << stk[--cur] << ' ';
		}
		cout << "\n";
	}
	return 0;
}
