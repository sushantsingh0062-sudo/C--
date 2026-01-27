#include <iostream>
using namespace std;
// Base class 
class Shape{
    public  :
        void draw (){
            cout  << "Drawing Shape " <<  endl;

        }
};
// Derived class 1
class Rectangle : public Shape {
    public :
    float length, breadth;
    void area (){
        cout << "Enter length = ";
        cin>>length;
        cout << "Enter breadth= ";
        cin>>breadth;

        cout << "Area of Rectangle  = " << length * breadth << endl;

        //Formula : Area  = length X Breadth
    }

};
int main (){
    Rectangle s;
    s.draw();
    s.area();
    return 0;




}