#include <iostream>
using namespace std;
int main(){
    int num ,temp,digit,sum =0, fact;
    cout << "Enter a number: ";
    cin >> num;
    temp = num ;
    while (temp>0){
        digit = temp % 10;

        //Calculate factorial of digit
        fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;

        }
        sum += fact;
        temp /= 10;

    }
    // Check Strong Number
    if (sum == num){
        cout << num << "is a Strong Number. " << endl;
        

        }
    
        else{
            cout << num << "is Not a strong Number. ";
        }
    return 0;
}