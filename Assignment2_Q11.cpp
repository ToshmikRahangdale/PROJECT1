/*11. WAP to print all digits of a number and their sum. */
#include<iostream>
using namespace std;
void AllDigit(int n)
{
   int sum = 0;
    for(int i = n;i>0;i/=10)
    {
        int digit =i%10;
        cout<<"Digit:"<<digit<<endl;
        sum += digit;
    }
    cout<<"Sum of digit:"<<sum<<endl;
}
int main()
{
    int n;
    cout<<"Enter the value: ";
    cin>>n;
    AllDigit(n);
    return 0;
}