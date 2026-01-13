#include <iostream>
using namespace std ;

int main() {
    int num, origignalNum, remainder, n = 0;
    double result = 0.0;
    cout << "Enter a number:";
    cin >> num ;
    origignalNum = num ;
    // Countnumber of digit 
    while (origignalNum != 0) {
        origignalNum /= 10;
        n++;
    }
    origignalNum = num;
    
}
