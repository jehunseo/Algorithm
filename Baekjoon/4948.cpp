//link : https://www.acmicpc.net/problem/4948
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int arr[2 * 123456 + 10] = {0, 0};
	int k;
    for(int i = 2 ; i * i <= 2 * 123456 ; i++){
	    if(arr[i]) continue;
	    for(int j = i * i ; j <= 2 * 123456 ; j += i) arr[j] = 1;
    }
    
    while(1){
        cin >> k;
        if(k == 0) break;
        
	    int cnt = 0;
    	for(int i = k + 1 ; i <= 2 * k ; i++){
    		if(!arr[i]) cnt++;
        }
	    cout << cnt << "\n";

    }
	return 0;
}
