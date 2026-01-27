#include <iostream>
using namespace std ;
int main (){
    int arr[6] = {5,-2,9,-8,5,-1};
    int pos = 0,neg =0;

    for (int i = 0 ; i<6;i++){
        if(arr[i]>=0)
            pos ++;
        else 
        neg ++;

    }
cout  << "Positive number = " << pos << endl;
cout << "Negative number = " << neg << endl;

return 0;

}