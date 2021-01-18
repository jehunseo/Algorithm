#include <iostream>
#include <utility>
#include <tuple>
#include <queue>
using namespace std;

int main() {
	// your code goes here
	int n, m, o;
	int map[100][100][100];
	int dr[] = {1, 0, 0, -1, 0, 0};
	int dc[] = {0, 1, 0, 0, -1, 0};
	int dh[] = {0, 0, 1, 0, 0, -1};
	int cnt = 0;

	queue<tuple<int, int, int>> q;

	cin >> n >> m >> o;
	for(int k = 0 ; k < o ; k++){
		for(int i = 0 ; i < m ; i++){
			for(int j = 0 ; j < n ; j++){
				cin >> map[i][j][k];
				if(map[i][j][k] != 0) cnt++;
				if(map[i][j][k] == 1) q.push(make_tuple(i, j, k));
			}
		}
	}
	if(cnt == n * m * o){
		cout << 0;
		return 0;
	}

	while(!q.empty()){
		int step = q.size();
		for(int i = 0 ; i < step ; i++){
			tuple<int, int, int> cur = q.front() ; q.pop();
			for(int j = 0 ; j < 6 ; j++){
				int r = get<0>(cur) + dr[j];
				int c = get<1>(cur) + dc[j];
				int h = get<2>(cur) + dh[j];
				
				if(r < 0 || c < 0 || h < 0 || r == m || c == n || h == o) continue;
				if(map[r][c][h] != 0) continue;

				q.push(make_tuple(r, c, h));
				map[r][c][h] = map[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
			}
		}
	}

	int mx = 0;
	for(int k = 0 ; k < o ; k++){
		for(int i = 0 ; i < m ; i++){
			for(int j = 0 ; j < n ; j++){
				if(map[i][j][k] == 0){
					cout << -1;
					return 0;
				}
				if(mx < map[i][j][k]) mx = map[i][j][k];
			}
		}
	}

	cout << mx - 1;
	return 0;
}
