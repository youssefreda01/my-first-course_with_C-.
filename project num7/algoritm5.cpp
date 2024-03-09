#include <iostream>
using namespace std;
int main()
{
    int base;                        // مساحه المثلث 
    int height;

    cout << "==calculate tringale area==\n" ;
    cout << "enter the base and the height of the rectangel: \n";

    cin >> base >> height;

    int area = (base/2)*height;

    cout << "\nthe area of the rectangel is: " << area ;

    return 0;

}