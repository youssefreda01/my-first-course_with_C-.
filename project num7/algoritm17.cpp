#include <iostream>
using namespace std;
int main()
{
    cout << "==amount payment==\n";
    cout << "enter loan amount $ num of months : ";

    float loan_amount , number_of_months;
    cin >> loan_amount >> number_of_months;

    float monthly_payment = loan_amount/number_of_months;

    cout << "amount payment in month : " << monthly_payment;

    return 0;

}