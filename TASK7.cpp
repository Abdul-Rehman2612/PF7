#include<iostream>
#include<iomanip>
using namespace std;

void percentageCalculate(int numberCount);

main()
{
    int numberCount;

    cout << "Enter numbers count: ";
    cin >> numberCount;

    percentageCalculate(numberCount);   
}
void percentageCalculate(int numberCount)
{   float n1_200=0.0;
    float n201_399=0.0;
    float n400_599=0.0;
    float n600_799=0.0;
    float n800_=0.0;
    int number=0;
    float x=numberCount*1.0;
    for(numberCount ; numberCount >= 1; numberCount = numberCount -1 )
    {
        cout << "Enter a number: ";
        cin >> number;
        if (number<200)
        {
            n1_200 =n1_200+1.0;
        }
        else if (number>=200 && number<400)
        {
            n201_399=n201_399+1.0;
        }
        else if (number>=400 && number<600)
        {
            n400_599=n400_599+1.0;
        }
        else if (number>=600 && number<800)
        {
            n600_799=n600_799+1.0;
        }
        else if (number>=800)
        {
            n800_=n800_+1.0;
        }
        if(numberCount==1)
        {
            float per_n1_200 = (n1_200/x)*100;
            cout << fixed << setprecision(2) << per_n1_200 << "%" << endl;

            float per_n201_399 = (n201_399/x)*100;
            cout << fixed << setprecision(2) << per_n201_399<< "%" << endl;

            float per_n400_599 = (n400_599/x)*100;
            cout << fixed << setprecision(2) << per_n400_599 << "%" << endl;

            float per_n600_799= (n600_799/x)*100;
            cout << fixed << setprecision(2) << per_n600_799 << "%" << endl;

            float  per_n800_= (n800_/x)*100;
            cout << fixed << setprecision(2) << per_n800_ << "%" ;
        }
    }
}
    