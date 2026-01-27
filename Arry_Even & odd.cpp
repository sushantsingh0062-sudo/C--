#include <iostream>
using namespace std;
int main (){
    int arr[6]= {10, 15, 20, 25,30,35};
    cout  << "Even number: ";
    for (int i= 0; i<6 ; i++){
        if (arr[i]% 2== 0 )
        cout << arr [i] << " ";
    } 
    cout << "\n Odd number: ";
    for (int i = 0 ; i< 6;i++){
        if (arr[i]% 2!= 0)
            cout << arr[i] << " ";

    }
    return 0;
}
