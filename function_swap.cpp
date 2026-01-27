#include <iostream>
using namespace std ;
void swap (){
    int a = 2 ;
    int b = 4 ;
    int c ;
    cout << "before swap: " << a << b;
    c = a;
    a = b;
    b = c;
    cout  <<"\nafter swap: "<<a<<" "<<b;
}
int main(){
    swap();
}