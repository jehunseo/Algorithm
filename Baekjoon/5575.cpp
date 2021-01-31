#include <iostream>
using namespace std;

int main(void){
    int a, b, c, d, e, f;
    
    for(int i = 0 ; i < 3 ; i++){
        cin >> a >> b >> c >> d >> e >> f;
        
        d -= a;
        e -= b;
        f -= c;
        
        if(f < 0){
            f += 60;
            e--;
        }
        if(e < 0){
            e += 60;
            d--;
        }
        cout << d << ' ' << e << ' ' << f << "\n";
    }
}
