/*10. WAP to check whether a number is prime or not. */
#include<iostream>
using namespace std;
void PrimeOrNot(int n)
{
     bool flag = true;
   if(n == 0 || n == 1)// 0 and 1 are not prime number
   {
    flag = false;
   }
   for(int i = 2; i <= n/2; ++i)
   {
    if(n % i == 0)
    {
        flag = false;
        break;
    }
   }
   if(flag)
   {
    cout<<n<<" is a prime number";
   }
   else
   cout << n <<" is not a prime number";
}
int main()
{
    int n;
    cout<<"Enter the value:";
    cin>>n;
    PrimeOrNot(n);
    return 0;
}