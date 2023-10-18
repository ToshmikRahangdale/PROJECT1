/*2. WAP for printing all natural numbers in reverse order starting from 20. */
#include<iostream>
using namespace std;
void ReverseNumber(int n){
    for (int i = n; i >= 1; i--)
    {
        cout<<i<<" ";
    }
}
int main(){
    ReverseNumber(20);
    return 0;
}
