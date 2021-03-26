#include <iostream>
#include <vector>
#include <typeinfo>
using namespace std;

int main() {
	// your code goes here
	int map[8][8];
	vector<pair<int, int>> v;
	int r, c, n, m;
	unsigned int cnt = 1;
	int mini, min_tmp, min_ref;
	int dr[] = {0, 1, 0, -1};
	int dc[] = {1, 0, -1, 0};
	cin >> n >> m;
	mini = min_ref = n * m;
	
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			cin >> map[i][j];
			if(map[i][j] != 0) mini--;
			if(map[i][j] > 0 && map[i][j] < 6){
				v.push_back(make_pair(i, j));
				cnt *= 4;
			}
		}
	}
	min_ref = mini;
	
	for(int i = 0 ; i < cnt ; i++){
		min_tmp = min_ref;
		int brute = i;
		for(int j = 0 ; j < v.size() ; j++){
			int tmp = brute % 4;
			brute = brute /= 4;
			
			r = v[j].first;
			c = v[j].second;
			int cctv = map[r][c];
			switch(cctv){
				case 1:			
					while(r > -1 && r < n && c > -1 && c != m){
						if(map[r][c] == 6) break;
						if(map[r][c] == 0){
							min_tmp--;
							map[r][c] = -1;
						}
						r += dr[tmp];
						c += dc[tmp];
					}
					break;
				case 2:
					while(r > -1 && r < n && c > -1 && c != m){
						if(map[r][c] == 6) break;
						if(map[r][c] == 0){
							min_tmp--;
							map[r][c] = -1;
						}
						r += dr[tmp];
						c += dc[tmp];
					}
					r = v[j].first;
					c = v[j].second;
					while(r > -1 && r < n && c > -1 && c != m){
						if(map[r][c] == 6) break;
						if(map[r][c] == 0){
							min_tmp--;
							map[r][c] = -1;
						}
						r += dr[(tmp + 2) % 4];
						c += dc[(tmp + 2) % 4];
					}

					break;
				case 3:					
					while(r > -1 && r < n && c > -1 && c != m){
						if(map[r][c] == 6) break;
						if(map[r][c] == 0){
							min_tmp--;
							map[r][c] = -1;
						}
						r += dr[tmp];
						c += dc[tmp];
					}
					r = v[j].first;
					c = v[j].second;
					while(r > -1 && r < n && c > -1 && c != m){
						if(map[r][c] == 6) break;
						if(map[r][c] == 0){
							min_tmp--;
							map[r][c] = -1;
						}
						r += dr[(tmp + 1) % 4];
						c += dc[(tmp + 1) % 4];
					}
					break;
				case 4:
					while(r > -1 && r < n && c > -1 && c != m){
						if(map[r][c] == 6) break;
						if(map[r][c] == 0){
							min_tmp--;
							map[r][c] = -1;
						}
						r += dr[tmp];
						c += dc[tmp];
					}
					r = v[j].first;
					c = v[j].second;
					while(r > -1 && r < n && c > -1 && c != m){
						if(map[r][c] == 6) break;
						if(map[r][c] == 0){
							min_tmp--;
							map[r][c] = -1;
						}
						r += dr[(tmp + 1) % 4];
						c += dc[(tmp + 1) % 4];
					}
					r = v[j].first;
					c = v[j].second;
					while(r > -1 && r < n && c > -1 && c != m){
						if(map[r][c] == 6) break;
						if(map[r][c] == 0){
							min_tmp--;
							map[r][c] = -1;
						}
						r += dr[(tmp + 2) % 4];
						c += dc[(tmp + 2) % 4];
					}
					break;
				case 5:
					while(r > -1 && r < n && c > -1 && c != m){
						if(map[r][c] == 6) break;
						if(map[r][c] == 0){
							min_tmp--;
							map[r][c] = -1;
						}
						r += dr[tmp];
						c += dc[tmp];
					}
					r = v[j].first;
					c = v[j].second;
					while(r > -1 && r < n && c > -1 && c != m){
						if(map[r][c] == 6) break;
						if(map[r][c] == 0){
							min_tmp--;
							map[r][c] = -1;
						}
						r += dr[(tmp + 1) % 4];
						c += dc[(tmp + 1) % 4];
					}
					r = v[j].first;
					c = v[j].second;
					
					while(r > -1 && r < n && c > -1 && c != m){
						if(map[r][c] == 6) break;
						if(map[r][c] == 0){
							min_tmp--;
							map[r][c] = -1;
						}
						r += dr[(tmp + 2) % 4];
						c += dc[(tmp + 2) % 4];
					}
					r = v[j].first;
					c = v[j].second;
					while(r > -1 && r < n && c > -1 && c != m){
						if(map[r][c] == 6) break;
						if(map[r][c] == 0){
							min_tmp--;
							map[r][c] = -1;
						}
						r += dr[(tmp + 3) % 4];
						c += dc[(tmp + 3) % 4];
					}
					break;
			}
		}
		if(mini > min_tmp) mini = min_tmp;

		for(int a = 0 ; a < n ; a++){
			for(int b = 0 ; b < m ; b++){
				if(map[a][b] < 0) map[a][b] = 0;
			}
		}
	}
	
	cout << mini;
	return 0;
}
