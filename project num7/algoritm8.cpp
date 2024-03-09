#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "\n==calculate circle area==\n";
    cout << "enter value of circumference: ";

    double circumference;                                            // حساب مساحه الدائره عن طريق محيط الدائره
    cin >> circumference;
     
    const float PI = 3.14;
    double area = pow(circumference,2)/(4*PI);


    cout << "area of the circle is: " << area ;
    cout << "\nfloar area = " << floor(area);


    return 0;    

}
