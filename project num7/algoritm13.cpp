#include <iostream>
using namespace std;
int main()
{
    cout << "==Total Bill==\n";                    // مشروحه
    cout << "enter bill value : ";

    double bill_value;
    cin >> bill_value;
    
    double service_charge = .10 * bill_value;
    double tax = .16 * bill_value;
    double total_bill = bill_value + tax + service_charge ;

    cout << "Total Bill = " << total_bill;
}