#include<iostream>
using namespace std;

int digitSum(int number);

main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    int sum = digitSum(number);
    cout << "Sum of digits: " << sum ;
}
int digitSum(int number)
{
    int x,a=1;
    int sum = 0;
    for(x == number ; a !=0; x = ( x / 10 ) )
    {
        a = number % 10;
        sum = sum + a;
        number =  number / 10;
    }
    return sum ;
}