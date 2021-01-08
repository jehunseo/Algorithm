#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int sum = 0;
    for(int i = 0 ; i < 4 ; i++){
        int a = 0;
        cin >> a;
        sum += a;
    }
    printf("%d\n%d", (int)sum/60, sum%60);
	return 0;
}
