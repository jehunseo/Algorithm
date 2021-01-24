#include <iostream>
#include <utility>
#include <queue>
using namespace std;

queue<pair<int, int>> q;
int r, c;
int dr[] = {1, 0, -1, 0};
int dc[] = {0, 1, 0, -1};
int arr[100][100];
int a;
int cnt;
int mn = 0 , mx = 0;
int tp;

int main() {
	// your code goes here
	cin >> a;
	
	for(int i = 0 ; i < a ; i++){
		for(int j = 0 ; j < a ; j++){
			cin >> arr[i][j];
			if(tp < arr[i][j])
				tp = arr[i][j];
		}
	}
	
	for(int x = 0 ; x < tp ; x++){
		bool visit[100][100] = {false, };
		
		for(int i = 0 ; i < a ; i++){
			for(int j = 0 ; j < a ; j++){
				if(visit[i][j]) continue;
				
				if(arr[i][j] > mn){
					q.push({i, j});
					visit[i][j] = true;
					cnt++;
				}
				
				while(!q.empty()){
					auto cur = q.front();
					q.pop();
					
					for(int k = 0 ; k < 4 ; k++){
						r = cur.first + dr[k];
						c = cur.second + dc[k];
						
						if(r < 0 || c < 0 || r == a || c == a) continue;
						if(visit[r][c] || arr[r][c] <= mn) continue;
						
						visit[r][c] = true;
						q.push({r, c});
					}
				}
			}
		}
		
		if(cnt > mx) mx = cnt;
		mn++;
		cnt = 0;
	}
	cout << mx;
	return 0;
}
