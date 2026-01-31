#include<iostream>
using namespace std;
class Shape {
    public:
    virtual void draw(){
        cout << "Drawing shape"<< endl;

    }
};
class Rectangle :public Shape{
    public:
        void draw (){
            cout << "Drawing rectangle "<< endl;

        }
};
class Circle :public Shape {
    public:
    void draw(){
        cout << "Drawing cricle " << endl;

    }
};
int main (){
    Shape *s;
    Rectangle r;
    Circle c;
    s = &r;
    s->draw();

    s= &c;
    s->draw();
    return 0;
}