#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "==calculate the area of the circle==\n";
    cout << "enter value of the square side: ";                       //حساب مساحه الدائره الي جو مربع عن طريق ضلع المربع

    int side;
    cin >> side;

    const float PI = (3.14f);
    double area = (PI*pow(side,2))/4;

    cout << "area of the circle is: " << area ;
    cout << "\nceil area = " << ceil(area);

    return 0; 
}
