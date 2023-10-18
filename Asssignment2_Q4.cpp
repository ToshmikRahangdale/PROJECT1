/*4. WAP for printing all odd numbers from 1 to 20. */
#include<iostream>
using namespace std;
void OddNumber(int n){
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
    }
}
int main(){
    OddNumber(20);
    return 0;
}