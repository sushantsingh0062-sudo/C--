#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str;
    cout <<"Enter string: ";
    cin >> str;
    sort(str.begin(),str.end());
    cout <<"Sorted string: "<<str;
    return 0;
}