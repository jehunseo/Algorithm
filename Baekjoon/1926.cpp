#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int arr[500][500];
	bool visit[500][500];
	int n, m;
	int r, c;
	int dr[4] = {1, 0, -1, 0};
	int dc[4] = {0, 1, 0, -1};
	queue<pair<int, int>> q;
	int size = 0, mx = 0, cnt = 0;

	cin >> n >> m;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			cin >> arr[i][j];
		}
	}
	
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			if(visit[i][j]) continue;
			if(!arr[i][j]) continue;
			
			cnt++;
			q.push(make_pair(i, j));
			while(!q.empty()){
				pair<int, int> cur = q.front();
				q.pop();
				
				for(int k = 0 ; k < 4 ; k++){
					r = cur.first + dr[k];
					c = cur.second + dc[k];
					
					if(r < 0 || c < 0 || r >= n || c >= m) continue;
					if(visit[r][c] || !arr[r][c]) continue;
					
					size++;
					visit[r][c] = 1;
					q.push(make_pair(r, c));
				}
			}
			
			if(size == 0) size++;
			if(size > mx) mx = size;
			size = 0;
		}
	}
	
	cout << cnt << "\n" << mx;
	return 0;
}
