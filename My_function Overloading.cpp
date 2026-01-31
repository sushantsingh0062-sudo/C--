# include <iostream>
using namespace std;
class print {
    public :
    void printChar(char c ){
        cout << "character: " << c <<  endl;

    }
    void printString(string s ){
        cout << " String : " << s << endl;
    }
    
};
int main(){
    print p;
    p.printChar ('A');
   p.printString("Hello");
   return 0;  


}