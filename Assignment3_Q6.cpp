#include<iostream>
using namespace std;
int reverse(int num,int rnum =0)
{
    if(num==0){
        return rnum;
    }
    int lastDigit = num%10;
    rnum = (rnum+10)+lastDigit;
    return reverse(num/10,rnum);
}
bool Palindrome(int num)
{
    int rev = reverse(num);
    return num == rev;
}
int main()
{
    int number;
    cout<<"Enter number ";
    cin>>number;
    if(Palindrome(number))
    {
        cout<<number<<"is palindron "<<endl;
    }
    else
    {
        cout<<number<<"is not palindrom "<<endl;
    }
    return 0;
}