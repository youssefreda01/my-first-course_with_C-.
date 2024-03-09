#include <iostream>
using namespace std;
int main()
{                                                 // بيحسب مساحه المستطيل

    int length;
    int width;

    cout << "==calculate rectangel area==\n" ;
    cout << "enter the length and the width of rectangel:  ";

    cin >> length >> width ;

    int area = length*width;

    cout << "\nthe area of the rectangel is: " << area;

    return 0;
    

}