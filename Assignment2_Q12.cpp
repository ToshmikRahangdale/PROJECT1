#include<iostream>
using namespace std;
void Reverse(int n)
{

    int rev = 0;
    while(n>0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    cout<<"The reverse of the number is"<<rev<<endl;
}
int main()
{
    int n;
    cout<<"Enter value: ";
    cin>>n;
    Reverse(n);
    return 0;
}