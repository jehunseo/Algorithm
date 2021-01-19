#include <iostream>
#include <utility>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	bool visit[110][110];
	int arr[1000] = {0, };
	int cnt = 0;
	int dr[] = {1, 0, -1, 0};
	int dc[] = {0, 1, 0, -1};
	int m, n, k;
	int a, b, c, d;
	queue<pair<int, int>> q;
	
	cin >> n >> m >> k;
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			visit[i][j] = false;
		} 
	}
	for(int i = 0 ; i < k ; i++){
		cin >> a >> b >> c >> d;
		for(int j = a ; j < c ; j++){
			for(int o = b ; o < d ; o++){
				visit[j][o] = true;
			}
		}
	}
	
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			if(!visit[i][j]){
				cnt++;
				q.push(make_pair(i, j));
				
				while(!q.empty()){
					pair<int, int> cur = q.front();
					q.pop();
					
					for(int o = 0 ; o < 4 ; o++){
						int r = cur.first + dr[o];
						int c = cur.second + dc[o];
						
						if(r < 0 || c < 0 || r >= m || c >= n) continue;
						if(visit[r][c]) continue;
						
						arr[cnt - 1]++;
						q.push(make_pair(r, c));
						visit[r][c] = true;
					}
				}
			}
		} 
	}
	cout << cnt << "\n";
	sort(arr, arr + cnt);
	for(int i = 0 ; i < cnt ; i++){
		cout << (arr[i] == 0 ? 1 : arr[i]) << ' ';
	}
	return 0;
}
