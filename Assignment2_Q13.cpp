/*13. WAP to check whether the number is Armstrong or not. */
#include<iostream>
using namespace std;
void Armstrong(int num)
{
    int originalNum,reminder;
   int result=0;
    originalNum=num;
    while(originalNum != 0)
    {
        reminder = originalNum % 10;
        result += reminder*reminder*reminder;
        originalNum /= 10;
    }
    if(result == num)
    
        cout<<num<<" is an Amstrong number. ";
        else
        cout<<num<<" Is not Amstrong number.";
}
int main()
{
    int num;
    cout<<"Enter number:";
    cin>>num;
    Armstrong(num);
    return 0;

}