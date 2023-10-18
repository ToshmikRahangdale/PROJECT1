/*WAP Exception Handling for Divide by zero condition for the division of two number*/
#include<iostream>
using namespace std;
int main()
{
    float numerator,dinominator;
    cout<<"Enter the Number: ";
    cin>>numerator>>dinominator;
    float result;
    try
    {
        if(dinominator == 0)
        throw 3;
        else
        result = numerator/dinominator;
    }
    catch(float)
    {
        cout<<"Divided by  zero Exception "<<endl;
    }
    catch(char)
    {
        cout<<"Divided by zero exception"<<endl;
    }
    cout<<"Result is: "<<result<<endl;
    return 0;
}