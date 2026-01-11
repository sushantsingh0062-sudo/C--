#include <iostream>
using namespace std;
int main (){
    int i,j,k;
       for (i = 2; i <= 100; i++){
           k=0;
           for (j = 1; j <= i; j++){
               if (i % j == 0){
                   k++;
               }
           }
           if (k == 2){
               cout << i << " ";
           }
       }
    return 0;
}
    
    