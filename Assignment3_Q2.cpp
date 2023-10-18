#include<iostream>
using namespace std;
int Number(int n){
    if( n == 0){
        return 0;
    }
    return (n % 10)+Number(n/10);
}
int main()
{
    int n;
    cin>>n;
    cout<<Number(n);

    return 0;
}