#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str [100];
    int len ;

    cout << "enter sting:  ";
    cin.getline(str ,100);

    len = strlen(str);

    cout << "Revresed String: ";
    for (int i = len -1; i>=0;i--){
        cout <<str [i];

    }
    return 0;
}