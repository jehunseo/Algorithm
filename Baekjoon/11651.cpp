#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

vector<pair<int, int>> v;
int n;
int x, y;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> x >> y;
		v.push_back({y, x});
	}
	sort(v.begin(), v.end());
	
	for(auto a : v){
		cout << a.second << ' ' << a.first << "\n";
	}
	return 0;
}
