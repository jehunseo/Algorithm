#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> v;
int n, tmp;
bool comp(int a, int b){
	return a > b;
}


int main() {
	// your code goes here
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end(), comp);
	for(auto i : v) cout << i << "\n";
	
	return 0;
}
