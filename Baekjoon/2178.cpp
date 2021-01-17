#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int main() {
	// your code goes here
	int map[100][100];
	bool visit[100][100];
	int r, c;
	int n, m;
	int dr[4] = { 1, 0 , -1, 0};
	int dc[4] = { 0, 1, 0, -1};
	int mx;
	queue<pair<int, int>> q;
	
	cin >> n >> m;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			scanf("%1d", &map[i][j]);
		}
	}
	
	visit[0][0] = 1;
	q.push(make_pair(0, 0));
	while(!q.empty()){
		pair<int, int> cur = q.front();
		q.pop();
		
		for(int i = 0 ; i < 4 ; i++){
			r = cur.first + dr[i];
			c = cur.second + dc[i];
			
			if(r < 0 || c < 0 || r == n || c == m) continue;
			if(visit[r][c] || !map[r][c]) continue;
			
			visit[r][c] = 1;
			q.push(make_pair(r, c));
			map[r][c] += map[cur.first][cur.second];
		}
	}

	cout << map[n-1][m-1];
	return 0;
}
