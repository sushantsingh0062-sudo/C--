#include <iostream>
using namespace std;
class Bank
{
private:
int balance = 0;
public:

void deposit(int amt)
{
cout << "Enter amount to deposit: ";
cin >> amt;
balance += amt;
cout << "Balance after deposit: " << balance << endl;
}
void withdraw(int amt)
{
balance -= amt;
cout << "Balance after withdraw: " << balance << endl;
}
};
int main()
{
Bank b;
b.deposit(0);
b.withdraw(1000);
return 0;
}