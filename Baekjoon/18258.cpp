#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

int main(void)
{
	
ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL); 
    char a[10];
    int b;
    queue<int> q;
    cin >> b;
    
    for(int i = 0 ; i < b ; i++)
    {
    	cin >> a;
    	
    	if(!strcmp(a, "push"))
    	{
    		int c;
    		cin >> c;
    		q.push(c); 
    	}
    	else if(!strcmp(a, "size")) cout << q.size() << "\n";
    	else if(q.empty())
    	{
    		if(!strcmp(a, "empty")) cout << "1\n";
    		else cout << "-1\n";
    	}
    	else if(!q.empty())
    	{
    		if(!strcmp(a, "empty")) cout << "0\n";
    		else if(!strcmp(a, "back")) cout << q.back() << "\n";
    		else
    		{
    			cout << q.front() << "\n";
    			if(!strcmp(a, "pop")) q.pop();
    		}
    	}
    }
    return 0;
}
