//link :https://www.acmicpc.net/problem/2446
#include <iostream>

int main(void){
    int star;
    
    std::cin >> star;
    
    for(int j=star;j>0;j--){
        for(int i=star;i>j;i--){
           std::cout << " ";
        }
        for(int i=0;i<2 * j - 1;i++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    for(int j=1;j<star;j++){
        for(int i=0;i<star - j - 1;i++){
           std::cout << " ";
        }
        for(int i=0;i<2 * j  + 1;i++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
  return 0;
    
    
    return 0;
}
