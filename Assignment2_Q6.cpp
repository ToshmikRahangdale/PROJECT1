/*6. WAP for finding sum of all even numbers till 20. */
#include<iostream>
using namespace std;
void evenNumber()
{
    int sum =0;
    for(int i=1;i<=20;i++)
    {
        if(i%2==0)
        {
            sum = sum+i;
        }
        cout<<"Sum of all even number till 20 is : "<<sum<<endl;
        
    }
}
int main()
{
    evenNumber();
    return 0;
}
