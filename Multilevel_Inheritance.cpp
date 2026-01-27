#include <iostream>
using namespace std;
class Sport {
    public :
        int score = 20;
        

};

class Academics {
    public:
        int marks = 80;

};
class Student  : public Sport, public Academics {
    public:

        void total(){
            cout << "Total = " << score+ marks  << endl;

        }
};
int main (){
    Student s;
    s.total ();
    return 0;

}