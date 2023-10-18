/*WAP to swap to number using template function*/
#include<iostream>
using namespace std;
template <typename T>

void Swap(T& a,T& b)
{
    T temp =a;
    a = b;
    b = temp;
}
int main()
{
    int x=10, y = 23;
    cout<<"Before swaping:X= "<<x<<",Y = "<<y<<endl;
    Swap(x, y);
    cout<<"After swaping: X ="<<x<<",Y ="<<y<<endl;

    double p=3.14,q =2.17;
    cout<<"Before swaping: p ="<<p<<",q = "<<q<<endl;
    Swap(p, q);
    cout<<"After swapping: p = "<<p<<",q = "<<q<<endl;

    return 0;
}