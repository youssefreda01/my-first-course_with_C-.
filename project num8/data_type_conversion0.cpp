#include <iostream>
#include <string>
using namespace std;

int main()
{                                                 // convert string to int,float,double
    string st1 = "43.224";

    int num_int = stoi(st1);

    float num_float = stof(st1);

    double num_double = stod(st1);

    cout << "num_int = " << num_int ;
    cout << "\nnum_float = " << num_float ;
    cout << "\nnum_double = " << num_double ;


    return 0;

}