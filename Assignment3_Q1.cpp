#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==0){//base case
        return 1;
    }
    return n*factorial(n-1);//recursive case
}
int main(){
    int n ;
    cin>>n;
    cout<<factorial(n);
    return 0;
}