#include <iostream>
#include <string>
using namespace std;

string a = "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n";
string b = "\"재귀함수가 뭔가요?\"\n";
string c = "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n";
string d = "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n";
string e = "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n";
string f = "\"재귀함수는 자기 자신을 호출하는 함수라네\"\n";
string g = "라고 답변하였지.\n";

int n;

void func(int a){
	for(int i = 0 ; i < a*4 ; i++) cout << '_';
	cout << b;
	
	if(a == n){
		for(int i = 0 ; i < a*4 ; i++) cout << '_';
		cout << f; 
		for(int i = 0 ; i < a*4 ; i++) cout << '_';
		cout << g;
		return;
	}
	else{
		for(int i = 0 ; i < a*4 ; i++) cout << '_';
		cout << c; 
		for(int i = 0 ; i < a*4 ; i++) cout << '_';
		cout << d;
		for(int i = 0 ; i < a*4 ; i++) cout << '_';
		cout << e;
		func(a+1);
	}
	for(int i = 0 ; i < a*4 ; i++) cout << '_';
	cout << g;
}

int main() {
	// your code goes here
	cin >> n;
	cout << a;
	func(0);
	return 0;
}
