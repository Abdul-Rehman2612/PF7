#include<iostream>
using namespace std;

void frequencyChecker(int number, int digit);

main()
{
    int number;
    int digit;

    cout << "Enter a number: ";
    cin >>  number;

    cout << "Enter the digit to check: ";
    cin >> digit; 

    frequencyChecker(number, digit);
}
void frequencyChecker(int number, int digit)
{
    int frequency=0;
    int x;
    if (number < 0)
    {
        number = number * -1;
    }
    if (number == 0)
    {
        frequency = frequency + 1 ;
    } 
    
    for(x == number; number != 0 ; x = (x/10) )
    {
        int  a = number % 10;
        if( a == digit )
        {
            frequency = frequency + 1;
        }
        number = number/10;
    }
    cout << "Frequency: " << frequency ;
}