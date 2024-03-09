#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "enter a number: ";                          //  تحط رقم وبعدها تربعو وتكعبو وهكذا

    double num;
    cin >> num;

    cout << "Square: " << pow(num,2) << endl;
    cout << "Cubed: " << pow(num,3) << endl;
    cout << "forth power: " << pow(num, 4) << endl;

    cout << "\nround num1, num2, num3 = " << round(pow(num,2)) << "\n" << round(pow(num,3)) << "\n" << round(pow(num,4)); 

    return 0;
}