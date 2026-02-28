#include<iostream>
#include<cstring>
using namespace std ;
int main (){
    char str[100],rev[100];
    int len ,i;

    cout << "Enter string : ";
    cin.getline(str,100);

    len = strlen(str);

    for (i= 0; i<len;i++){
        rev [i] = str[len -i-1];
    }
        rev [i] ='\0';

        if (strcmp(str,rev ) == 0)
        cout << " Palindrome string";
        else 
        cout << "Not a Palindrome";
        return 0;
    }

