#include <iostream>
#include <queue>
using namespace std;

bool arr[100001];
int a, b, cnt;
queue<int> q;

int main() {
	// your code goes here
	cin >> a >> b;
	if(a == b){
		cout << 0;
		return 0;
	}
	arr[a] = true;
	
	if(!(a-1<0) && !(a-1>100000) && !arr[a-1]) {
		q.push(a-1);
		arr[a-1] = true;
	}
	if(!(a+1<0) && !(a+1>100000) && !arr[a+1]){
		q.push(a+1);
		arr[a+1] = true;
	}
	if(!(a*2<0) && !(a*2>100000) && !arr[a*2]) {
		q.push(a*2);
		arr[a*2] = true;
	}
	
	while(!q.empty()){
		cnt++;
		int step = q.size();
		for(int i = 0 ; i < step ; i++){
			int cur = q.front();
			q.pop();
			
			if(!(cur-1<0) && !(cur-1>100000) && !arr[cur-1]) {
			q.push(cur-1);
			arr[cur-1] = true;
			}
			if(!(cur+1<0) && !(cur+1>100000) && !arr[cur+1]){
				q.push(cur+1);
				arr[cur+1] = true;
			}
			if(!(cur*2<0) && !(cur*2>100000) && !arr[cur*2]) {
				q.push(cur*2);
				arr[cur*2] = true;
			}
		
			if(cur == b){
				cout << cnt;
				return 0;
			}
		}
		
	}
	cout << cnt;
	return 0;
}
