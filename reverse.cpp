#include <iostream>
using namespace std;
int main (){
    int num = 1234,rev = 0;
        do{
            rev = rev * 10 + (num % 10);
            num /= 10;
        } while (num !=0);
    cout << "Reversed = " << rev;
    return 0;
}
