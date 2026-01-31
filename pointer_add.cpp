// pointer addition
#include <iostream>
using namespace std;
int main (){
    int arr [2][2]= {{1,2},{3,4}};
    cout << "Using pointer arithmetic to access elements:\n";
    for (int i =0;i<2;i++){
        for (int j=0;j<2;j++){
            cout << *(*(arr + i) + j) << " ";
        }
        cout << endl;
    }
    // return 0;
    int matrix[2][2] = {{5, 6}, {7, 8}};
    cout << "Accessing elements using pointer addition:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << *(*(matrix + i) + j) << " ";            
        }
        cout << endl;
    }
    return 0;
}