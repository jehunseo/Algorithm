#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int t, a;
queue<pair<int, int>> q;
bool map[300][300];
int r, c;
int dr[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dc[] = {-1, 1, -2, 2, -2, 2, -1, 1};
int sr, sc, fr, fc;
int cnt;

int main() {
	// your code goes here
	cin >> t;
	
	for(int i = 0 ; i < t;  i++){
		cin >> a;
		for(int j = 0 ; j < a ; j++){
			for(int k = 0 ; k < a ; k++){
				map[j][k] = false;
			}
		}
		
		cin >> sr >> sc;
		cin >> fr >> fc;
		if(sr == fr && sc == fc){
			cout << 0 << "\n";
			continue;
		}
		
		q.push(make_pair(sr, sc));
		while(!q.empty()){
			int step = q.size();
			for(int j = 0 ; j < step ; j++){
				pair<int, int> cur = q.front();
				q.pop();
				
				for(int k = 0 ; k < 8 ; k++){
					int r = cur.first + dr[k];
					int c = cur.second + dc[k];
					
					if(r < 0 || c < 0 || r >= a || c >= a) continue;
					if(map[r][c]) continue;
					
					if(r == fr && c == fc){
						cout << cnt+1 << "\n";
						j = step;
						while(!q.empty()) q.pop();
					}
					q.push(make_pair(r, c));
					map[r][c] = true;
				}
			}
			cnt++;
		}
		
		cnt = 0;
	}
	return 0;
}
