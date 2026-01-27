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

// Call by pointer function
void callByPointer(int* ptr){
    *ptr = *ptr + 5;
}

// Call by value function
void callByValue(int x){
    x = x + 5;
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
int main () {
    cout << "\n==== CALL BY VALUE ====\n";
    int a = 10;
    callByValue(a);
    cout << "After Call  by Value :"<< a<<endl;
    cout << "\n===== CALL BY REFREENCE=======\n";
    int c = 30;
    callByPointer (&c);
    cout << "After Call by pointer :" << c << endl ;
    cout << "\n==== DEFAULT ARGUMENT ====\n";
}