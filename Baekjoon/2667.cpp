#include <iostream>
#include <algorithm>
#include <utility>
#include <queue>
using namespace std;

int map[25][25];
bool visit[25][25];
int n;
int dr[] = {1, 0, -1, 0};
int dc[] = {0, 1, 0, -1};
int r, c;
int cnt;
int num;
int li[400];
queue<pair<int, int>> q;

int main() {
	// your code goes here
	cin >> n;
	
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			visit[i][j] = false;
			scanf("%1d", &map[i][j]);
		}
	}
	
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			if(visit[i][j] || map[i][j] == 0) continue;
			
			if(map[i][j]){
				cnt++;
				q.push(make_pair(i, j));
				
				while(!q.empty()){
					pair<int, int> cur = q.front();
					q.pop();
					for(int k = 0 ; k < 4 ; k++){
						r = cur.first + dr[k];
						c = cur.second + dc[k];
						
						if(r < 0 || c < 0 || r >= n || c >= n) continue;
						if(visit[r][c] || map[r][c] == 0) continue;
						
						num++;
						q.push(make_pair(r, c));
						visit[r][c] = true;
					}
				}
				li[cnt - 1] = num == 0 ? 1 : num;
				num = 0;
			}
		}
	}
	
	sort(li, li + cnt);
	cout << cnt << "\n";
	for(int i = 0 ; i < cnt ; i++){
		cout << li[i] << "\n";
	}
	return 0;
}
