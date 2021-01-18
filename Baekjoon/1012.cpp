#include <iostream>
#include <utility>
#include <queue>
using namespace std;

bool map[50][50];
int r, c, t, m, n, o;
int dr[] = {1, 0, -1, 0};
int dc[] = {0, 1, 0, -1};
int cnt;

queue<pair<int, int>> q;

int main() {
	// your code goes here
	cin >> t;
	
	for(int i = 0 ; i < t ; i++){
		for(int a = 0 ; a < 50 ; a++){
			for(int b = 0 ; b < 50 ; b++){
				map[a][b] = false;
			}
		}
		
		cin >> m >> n >> o;
		
		for(int j = 0 ; j < o ; j++){
			cin >> c >> r;
			map[r][c] = true;
		}
		
		for(int j = 0 ; j < n ; j++){
			for(int k = 0 ; k < m ; k++){
				if(map[j][k]){
					cnt++;
					q.push(make_pair(j, k));
					while(!q.empty()){
						pair<int, int> cur = q.front();
						q.pop();
						
						for(int l = 0 ; l < 4 ; l++){
							r = cur.first + dr[l];
							c = cur.second + dc[l];
							
							if(r < 0 || c < 0 || r == n || c == m) continue;
							if(!map[r][c]) continue;
							
							map[r][c] = false;
							q.push(make_pair(r, c));
						}
					}
				}
			}
		}
		
		cout << cnt << "\n";
		cnt = 0;
	}
	return 0;
}
