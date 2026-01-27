# include <iostream>
using namespace std;
// Function to calculate Fibonacci series up to n terms
int fibonacci(int n){
    if (n<=1)
    return n;
    return fibonacci(n-1) + fibonacci(n-2);
}
int main (){
    int n ;
    cout << "Enter terms:";
    cin >> n;
    for (int i = 0; i< n; i++)
    cout  << fibonacci(i)<< " ";
    return 0;
}
