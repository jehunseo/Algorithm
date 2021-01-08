#include <iostream>
#include <queue>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin >> a;
	
	queue<int> q;
	
	for(int i = 0 ; i < a ; i++){
		q.push(i + 1);
	}
	
	while(q.size() > 2){
		q.pop();
		q.push(q.front());
		q.pop();
	}
	
	cout << q.back();
 	return 0;
}
