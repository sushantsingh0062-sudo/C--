#include <iostream>
using namespace std;
class Book
{
    public:
    int Price;
    string Name;


    void display()

{
    cout << "Price:" << Price << endl;
    cout << "Name: " << Name << endl;

}
};
int main ()
{
    Book B1;   // Object creation 

    B1.Price = 999;
    B1.Name= "Laxmi kant";

    B1.display();

    return 0;
}