//link : https://www.acmicpc.net/problem/10808
#include <iostream>
#include <vector>

using namespace std;

int main(void){
    char v1[100];
    vector<int> v2(26, 0);
    
    cin >> v1;
    
    for(int i = 0 ; v1[i] ; i++){
        v2[v1[i] - 'a']++;
    }
    
    for(int i:v2){
        cout << i << ' ';
    }
}
