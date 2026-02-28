# include <iostream>
using namespace std ;
class sample {
    int *data ;
public:
    sample (int val ){
        data = new int ;
        *data = val ;

    }
    void show (){
        cout << "value: " << * data  << endl ;

    }
    ~sample (){
        delete data;

    }
};