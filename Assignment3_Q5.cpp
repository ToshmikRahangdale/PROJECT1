#include<iostream>
using namespace std;
int Fibonacci(int n ,int a=0,int b=1 )
{
    if(n>0){
        cout<<a<<" ";
        Fibonacci(n-1,b,a+b);
    }
}
int main()
{
    int range;
    cout<<"ENTER THE RANGE OF FIBONACCI serise ";
    cin>>range;
    if(range <= 0)
    {
        cout<<"Please enter positive range. "<<endl;

    }
    else
    {
        cout<<"Fibonacci serise within the range:";
        Fibonacci(range);
        cout<<endl;
    }
    return 0;
}