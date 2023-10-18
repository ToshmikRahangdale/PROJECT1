/*5. WAP for adding all numbers from 1 to 20. */
#include<iostream>
using namespace std;
int AddingNumber(){
    int sum=0;
    for(int i=1;i<=20;i++)
    {
        sum += i;
    }

    cout<<"Sum of number:"<<sum;
    return 0;
}
int main(){

      AddingNumber();
      return 0;
}