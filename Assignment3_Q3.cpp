#include<iostream>
using namespace std;
int ReverseNumber(int n,int rn=0){
    if(n==0){
        return rn;
    }
    int Digit=n%10;
    rn=(rn*10)+Digit;
    return ReverseNumber(n/10,rn);

}
int main()
{
    int number;
    cout<<"Enter Number:";
    cin>>number;
    int reversed=ReverseNumber(number);
    cout<<"Reversed number"<<reversed<<endl;
    return 0;
}