#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "==calculate circle area==\n";
    cout << "enter the diameter of the circle:\n ";

    double diameter;
    cin >> diameter;                                                 //   حساب مساحه الدائره بالقطر

    const float PI = 3.14;
    double area = (PI*pow(diameter,2))/4;

    cout << "the area of the circle is: " << area ;
    cout << "\nceil area = " << ceil(area) ;

    return 0;

}