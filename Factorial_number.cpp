#include <iostream>
using namespace std;
int main (){
    double num =1;
    double fact =1;
    cout <<"Enter a number find factorial ";
    cin >> num ;
    for (double i =1; i <= num ; i++){
        fact = fact * i;
}
    cout <<"Factorial of " << num << " is " << fact << endl;
    return 0;
}
