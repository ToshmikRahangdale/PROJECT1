/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void fun(int n)
{
    if(n>0)//base case
    {
        n=n-1;
        cout<<"calling....fun("<<n<<")"<<endl;
        fun(n);
        cout<<"calling to fun("<<n+1<<") going to finish"<<endl;
    }
}
int main()
{
    cout<<"calling...fun("<<6<<")"<<endl;
    fun(6);
    return 0;
}