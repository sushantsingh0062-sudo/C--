#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream fout;
    fout.open("data.txt");
    fout<<"welcome to c++ file handling";
    fout.close();
    cout<<"data written to file";
    return 0;
}
