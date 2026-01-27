#include<iostream>
using namespace std;
int main (){
    int Arry [5] ;
    cout << "Enter 5 number :\n";
    for (int i = 0 ; i <5; i++){
        cin >> Arry [i];
    }
    
    cout << "Arry element are :\n";
    for (int i = 0 ; i <5; i++){
        cout << Arry[i] << "  ";
    }
    return 0;
}