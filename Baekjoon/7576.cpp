#include <iostream>
#include <utility>
#include <queue>
using namespace std;

int main() {
	// your code goes here
	int n, m;
	int map[1000][1000];
	int dr[] = {1, 0, -1, 0};
	int dc[] = {0, 1, 0, -1};
	int cnt = 0;

	queue<pair<int, int>> q;

	cin >> n >> m;
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			cin >> map[i][j];
			if(map[i][j] != 0) cnt++;
			if(map[i][j] == 1) q.push(make_pair(i, j));
		}
	}
	if(cnt == n * m){
		cout << 0;
		return 0;
	}
	
	while(!q.empty()){
		int step = q.size();
		for(int i = 0 ; i < step ; i++){
			pair<int, int> cur = q.front() ; q.pop();
			for(int j = 0 ; j < 4 ; j++){
				int r = cur.first + dr[j];
				int c = cur.second + dc[j];
				
				if(r < 0 || c < 0 || r == m || c == n) continue;
				if(map[r][c] != 0) continue;
				
				q.push(make_pair(r, c));
				map[r][c] = map[cur.first][cur.second] + 1;
			}
		}
	}
	
	int mx = 0;
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			if(map[i][j] == 0){
				cout << -1;
				return 0;
			}
			if(mx < map[i][j]) mx = map[i][j];
		}
	}
	
	cout << mx - 1;
	return 0;
}
