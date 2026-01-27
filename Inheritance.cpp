#include <iostream>
using namespace std;
class student {
    public:
        int roll  = 1;

};
class Marks : public student {
    public:
        int m1 = 80, m2 = 85 ;

};
class Result : public Marks {
    public :
        void display (){
            cout <<"Roll No : "  << roll  << endl;
            cout  << "Total Marks : " << m1 + m2  << endl;  //agar ham public nhi likhe  gaya thoa by default private ho jaayega  or error  deyga

        }
};
 int main (){
    Result r;
    r.display ();
    return 0;
 }