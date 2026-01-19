#include <iostream>
#include <cmath>
#include <cstring>
using namespace  std;
//Non -Void function 
int add (int a ,int b){
    return a+b;

} 
// Void function 
void greet (){
    cout << " Welcome  to C++ Function\n";
}

// Boolean return function 
bool isEven (int num){
    return num %2 == 0;
}

int main() {
    //Using Non Void Function
    int sum = add(5, 10);
    cout << "Sum: " << sum << endl;

    //Using Void Function
    greet();

    //Using Boolean return function
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if(isEven(number)){
        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }

    return 0;
}