/*WAP for printing all natural numbers till 20. */
#include<iostream>
using namespace std;
void NaturalNumber (int n){
for(int i = 1; i<=n;i++)
{
    cout<<i<<" ";
}
}
int main(){
    NaturalNumber(20);
    return 0;
}
