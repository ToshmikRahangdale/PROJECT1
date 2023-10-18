/*3. WAP for printing all even numbers from 1 to 20. */
#include<iostream>
using namespace std;
void EvenNumber(int n){
    for(int i=1;i<=n;i++){
        if(i%2==0){
            cout<<i<<"  ";
        }
    }
}
int main()
{
    EvenNumber(20);
    return 0;
}