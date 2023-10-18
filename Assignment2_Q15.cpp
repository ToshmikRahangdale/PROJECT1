/*15. WAP to check whether the number entered is palindrome or not. */
#include<iostream>
using namespace std;
void palindrom(int n)
{
    int num,digit,rev=0;
    cout<<"Enter the positive number:";
    cin>>num;
    n=num;
    
    do
    {
        digit = num % 10;
        rev = (rev*10)+digit;
        num = num /10;
    }
    while(num != 0);
    cout << "The reverse number is:"<<rev<<endl;
    if(n == rev)
    cout<<"The number is palindrom.";
    else
    cout<<"The number is not pailindrom.";

}
int main()
{
    int n;
    cout<<"Enter number:";
    cin>>n;
    palindrom(n);
    return 0;
}