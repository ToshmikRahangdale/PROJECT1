#include<iostream>
#include<cmath>
using namespace std;

    int power(int base,int exponent)
    {
        if(exponent==0)
        {
            return 1;
        }
        return base*power(base,exponent-1);
    }

int Digits(int num)
{
    if(num==0)
    {
        return 0;
    }
    return 1+Digits(num/10);
}
bool Armstrong(int num,int originalNum,int n)
{
    if(num==0)
    {
        return originalNum==0;
    }
    int digit = num%10;
    int powerofDigits = power(digit,n);

    return powerofDigits + Armstrong(num /10, originalNum-powerofDigits,n)==originalNum;
}
int main()
{
    int number;
    cout<<"Enter the number";
    cin>>number;
    int numDigit = Digits(number);

    if(Armstrong(number,number,numDigit))
    {
        cout<<number<<" is Armstrong number. "<<endl;
    }
    else
    {
        cout<<number<<" is not Armstrong number. "<<endl;
    }
    return 0;
}