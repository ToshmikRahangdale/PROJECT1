#include<iostream>
using namespace std;
int main()

{char ch = 'A';
//int n=4;
    for(int i=0;i<4;i++){
        for(int j=4;j>i;j--){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
        ch='A'; 
    }
    return 0;
}