#include<iostream>
using namespace std;

void totalDigits(int number);

main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    totalDigits(number);
}
void totalDigits(int number)
{
    int digits = 0;
    for(int x = number ; (x/10) != 0; x = (x/10) )
    {
        number/10;
        digits = digits + 1;
    }
    digits = digits + 1;
    cout << "Total number of digits: " << digits ;
}