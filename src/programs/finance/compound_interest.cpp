#include "compound_interest.hpp"

void compound_interest()
{
    float principal, rate, time, result;
    cout << "\n\tThe name of the program => [Compound interest]\n" << endl;

    cout << "Enter principal : ";
    cin >> principal;

    cout << std::endl
              << "Enter rate : ";
    cin >> rate;

    cout << std::endl
              << "Enter time (year) : ";
    cin >> time;

    // Calculate compound interest
    result = principal * pow((1 + rate / 100), time);

    cout << std::endl
              << "Compound interest : " << result << endl;
}