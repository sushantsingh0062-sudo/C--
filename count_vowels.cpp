#include <iostream>
using namespace std ;

int main (){
    char str [100];
    int v =0, c=0, d=0,s=0;

    cout <<"Enter string: ";
    cin.getline(str ,100);

    for (int i= 0;str [i]!='\0';i++){
       if  (str [i]=='a'||str[i]=='e'||str[i]=='i'|| str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
           v++;
       }
       
    }
    for (int i=0;str [i]!='\0';i++){
        if (str[i]=='b'||str[i]=='c'||str[i]=='d'||str[i]=='f'||str[i]=='g'||str[i]=='h'||str[i]=='j'||str[i]=='k'||str[i]=='l'||str[i]=='m'||str[i]=='n'||str[i]=='p'||str[i]=='q'||str[i]=='r'||str[i]=='s'||str[i]=='t'||str[i]=='v'||str[i]=='w'||str[i]=='x'||str[i]=='y'||str[i]=='z'||
            str[i]=='B'||str[i]=='C'||str[i]=='D'||str[i]=='F'||str[i]=='G'||str[i]=='H'||str[i]=='J'||str[i]=='K'||str[i]=='L'||str[i]=='M'||str[i]=='N'||str[i]=='P'||str[i]=='Q'||str[i]=='R'||str[i]=='S'||str[i]=='T'||str[i]=='V'||str[i]=='W'||str[i]=='X'||str[i]=='Y'||str[i]=='Z'){
            c++;    
    }
    cout <<"Vowels: "<<v<<endl;
}
    return 0;
};