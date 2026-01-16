#include <iostream>
using namespace std;
class Employee
{
private:
int id;
float salary;


public:
void setid (int y)
{
    id = y;
}
void setsalary (float b)
{
    salary = b;
}

void display()
{
cout << "ID: " << id << endl;
cout << "Salary: " << salary << endl;
}
};
int main()
{
Employee e1, e2;
e1.setid  (101);
e1.setsalary (30000);
e2.setid(102);
e2.setsalary (40000);
e1.display();
e2.display();
return 0;
}