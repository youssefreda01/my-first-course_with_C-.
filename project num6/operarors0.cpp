#include <iostream>
using namespace std;
int main()
{
    cout << "please enter the first number A : ";

    float A;
    cin >> A;

    cout << "please enter the second number B : ";
    
    float B;
    cin >> B;

    cout << A << " = " << B << " is " << (A==B) << "\n";
    cout << A << " != " << B << " is " << (A!=B) << "\n";
    cout << A << " > " << B << " is " << (A>B) << "\n";
    cout << A << " < " << B << " is " << (A<B) << "\n";
    cout << A << " <= " << B << " is " << (A<=B) << "\n";
    cout << A << " >= " << B << " is " << (A>=B) << "\n";

       return 0;
}