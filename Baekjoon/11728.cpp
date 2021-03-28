#include <iostream>
#include <vector>
using namespace std;

vector<int> a, b, ans;
int n, m, tmp;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for(int i = 0 ; i < n ; i++){
		cin >> tmp;
		a.push_back(tmp);
	}
	for(int i = 0 ; i < m ; i++){
		cin >> tmp;
		b.push_back(tmp);
	}
	
	int i = 0, j = 0;
	while(1){
		if(a[i] < b[j]){
			ans.push_back(a[i++]);
		}
		else if(a[i] > b[j]){
			ans.push_back(b[j++]);
		}
		else{
			ans.push_back(a[i++]);
			ans.push_back(b[j++]);
		}
		if(i == n || j == m) break;
	}
	for(;i < n ; i++){
		ans.push_back(a[i]);
	}
	for(;j < m ; j++){
		ans.push_back(b[j]);
	}
	
	for(int i = 0 ; i < n+m ; i++){
		cout << ans[i] << ' ';
	}
	return 0;
}
