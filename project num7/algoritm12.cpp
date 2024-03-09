#include <iostream>
using namespace std;
int main()
{
    cout << "==bill program==\n";
    cout << "enter total bill $ cash paid: ";     //مشروحه
    
    float total_bill , cash_paid;
    cin >> total_bill >> cash_paid;

    float remainder = cash_paid - total_bill;

    cout << "remainder = " << remainder ;

    return 0;
}