#include <iostream>
using namespace std;
int main()
{
    cout << "==num of months payment==\n";                          // قرض بدون فوائد
    cout << "enter loan amount $ monthly payment : ";

    float loan_amount , monthly_payment;
    cin >> loan_amount >> monthly_payment;

    float number_of_months = loan_amount / monthly_payment;

    cout << "num of months : " << number_of_months ;

    return 0;
     
}