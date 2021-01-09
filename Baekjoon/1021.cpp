#include <iostream>
#include <deque>
using namespace std;

int main() {
	// your code goes here
	deque<int> a, b;
	int n, m;
	cin >> n >> m;
	for(int i = 0 ; i < n ; i++){
		a.push_back(i+1);
	}
	for(int i = 0 ; i < m ; i++){
		int k;
		cin >> k;
		b.push_back(k);
	}
	
	int cnt = 0;
	int front=0, back=0;
	while(!b.empty()){
		if(a.front() == b.front()){
			back = a.size() - front;
			cnt += front > back ? back : front;
			a.pop_front();
			b.pop_front();
			front=back=0;
		}
		else{
			a.push_back(a.front());
			a.pop_front();
			front++;
		}
	}
	
	cout << cnt;
	return 0;
}
