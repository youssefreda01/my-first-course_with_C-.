#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    const float PI = 3.14;
    cout << "==calculate circle area==\n";
    cout << "enter tringale sides value: ";
    float a;
    float b;
    cin >> a >> b;
    double area = PI * (pow(b,2)/4) * (((2*a)-b) / ((2*a)+b));         // حساب مساحه الدائره لو جو مثلث عن طريق اضلاع المثلث
    

    cout << "area of the circle = " << area;
    cout << "\nfloor area = " << floor(area);

    return 0;

}