#include <iostream>
#include <utility>
#include <queue>
using namespace std;


queue<pair<int, int>> q;
int n;
int dr[] = {1, 0, -1, 0};
int dc[] = {0, 1, 0, -1};
int r, c;
int RGB;
bool visit_RGB[100][100];
int GB;
bool visit_GB[100][100];
char map[100][100];

int main() {
	// your code goes here
	cin >> n;
	
	for(int i = 0 ; i < n ; i++){
		cin >> map[i];
	}
	
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			if(visit_RGB[i][j]) continue;
			
			RGB++;
			q.push(make_pair(i, j));
			visit_RGB[i][j] = true;
			char sig;
			while(!q.empty()){
				pair<int, int> cur = q.front();
				q.pop();
				sig = map[cur.first][cur.second];
				
				for(int k = 0 ; k < 4 ; k++){
					int r = cur.first + dr[k];
					int c = cur.second + dc[k];
					
					if(r < 0 || c < 0 || r == n || c == n ) continue;
					if(map[r][c] != sig || visit_RGB[r][c]) continue;
					
					visit_RGB[r][c] = true;
					q.push(make_pair(r, c));
				}
			}
		}
	}	
	for(int i = 0 ; i < n ; i++)
		for(int j = 0 ; j < n ; j++)
			if(map[i][j] =='R')
				map[i][j] = 'G';
			
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			if(visit_GB[i][j]) continue;
			
			GB++;
			q.push(make_pair(i, j));
			visit_GB[i][j] = true;
			char sig;
			while(!q.empty()){
				pair<int, int> cur = q.front();
				q.pop();
				sig = map[cur.first][cur.second];
				
				for(int k = 0 ; k < 4 ; k++){
					int r = cur.first + dr[k];
					int c = cur.second + dc[k];
					
					if(r < 0 || c < 0 || r == n || c == n ) continue;
					if(map[r][c] != sig || visit_GB[r][c]) continue;
					
					visit_GB[r][c] = true;
					q.push(make_pair(r, c));
				}
			}
		}
	}
	
	cout << RGB << ' ' << GB;
	return 0;
}
