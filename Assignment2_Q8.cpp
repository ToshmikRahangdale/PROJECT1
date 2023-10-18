/*8. WAP for printing multiplication table of a number.
 For eg. Display should be “ 2 X 1 = 2” */
#include<iostream>
using namespace std;
void Multiplication(int n)
{
    for(int i=1;i<=10;i++)
    {
        cout<<n<<" * "<<i<<" = "<<(n*i)<<endl;
        
    }
}
int main()
{
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    Multiplication(n);
    return 0;
}