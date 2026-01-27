//why null pointter is used//
//to show that a pointer is not pointing to any varible//
 //to avoid garbage value//
//to prevent accidental access to memory//

#include <iostream>
using namespace std;

int main (){
    int *p = nullptr;
    if (p== nullptr )
    cout  << "Pointer is null ";

    return 0 ;
}