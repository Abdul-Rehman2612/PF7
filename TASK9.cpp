#include<iostream>
#include<iomanip>
using namespace std;

int calculatePrice(int money,int year);

main()
{
    int money;
    int year;
    int remainingAmount;
    cout << "Enter Money: ";
    cin >> money;

    cout << "Enter Year: ";
    cin >> year;

    int totalexpense=calculatePrice(money,year);
    
    if(totalexpense<=money)
    {
        remainingAmount=money-totalexpense;
        cout << "Yes! He will live a carefree life and will have " << remainingAmount << " dollars left.";
    }
    else if(totalexpense>money)
    {
        remainingAmount=totalexpense-money;
        cout << "He will need " << remainingAmount << " dollars to survive.";
    }
}
int calculatePrice(int money,int year)
{
    int evenYearsExpense=0,oddYearsExpense=0;
    int totalExpense=0;
    int x=year;
    for(year;year>=1800;year=year-1)
    {
        if(year%2==0)
        {
            evenYearsExpense=evenYearsExpense+12000;
        }
        if(year%2!=0)
        {
            oddYearsExpense=oddYearsExpense+12000+50*(18+x-year);
        }
    }
    totalExpense=oddYearsExpense+evenYearsExpense;
    return totalExpense;
}