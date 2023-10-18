#include<iostream>
using namespace std;
void swap1(int &x,int &y)
{
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"x="<<x<<"and y="<<y<<endl;
}
int main(){
    int a = 20;
    int b = 15;
    cout<<"Before swap:"<<endl;
    cout<<"a="<<a<<" and b="<<b<<endl;
    swap1(a,b);
    cout<<"After swap1"<<endl;
    cout<<"a="<<a<<" and b= "<<b<<endl;
    return 0;
}