#include <iostream>
using namespace std;
// Function to calculate factorial of a number
int fact (int a){
    int fact = 1;
    for (int i = 1 ; i <= a ; i++){
        fact =fact*i;
        
    }
    return fact ;

}

int main (){
        int num ;
        cout << "Enter the number : ";
        cin >> num;
        cout  << "factorial = " << fact (num )<< endl;
        return 0;
    }
