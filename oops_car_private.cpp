#include <iostream>
using namespace std;
class Car
{
private:
string brand;
int year;

public:
void setBrand(string b)
{
    brand = b;
}
void setyear(int y)
{
    year = y;
}
void show()
{
cout << "Brand: " << brand << endl;
cout << "Year: " << year << endl;
}
};
int main()
{
Car c1;
c1.setBrand ("Toyota");
c1.setyear (2022);
c1.show();
return 0;
}