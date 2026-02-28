#include<iostream>
#include <string>
using namespace std;

int main (){
    string str, oldword ,newworld;

    cout <<"Enter string: ";
    getline(cin,str);

    cout <<"Enter word to replace: ";
    cin >> oldword;
    cout << "Enter new word: ";
    cin >>newworld;
    size_t pos = str.find(oldword);
    if (pos != string::npos){
        str.replace(pos, oldword.length(), newworld);
    }
    cout << "Updated string: " << str;
    return 0;
    
}