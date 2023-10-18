/*11. Write a program in C to calculate the square of the number using inline functions and macros both. */
#include<iostream>
using namespace std;
#define SQUARE_MACRO(x) (x*x)

inline int sqr_inline(int x)
{
    return x*x;
}
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;


    int result_inline = sqr_inline(num);
    cout<<"Square using inline fun: "<<result_inline<<endl;

    int result_macro = SQUARE_MACRO(num);
    cout<<"Square using macro: "<<result_macro<<endl;
    return 0;
}