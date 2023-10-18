#include<iostream>
using namespace std;
void fn(int=10,int=2,int=7);
int main()
{
    fn(30,40,50);
    return 0;
}
void fn(int x, int y, int z)
{
    cout<<x<<endl;
     cout<<y<<endl;
      cout<<z<<endl;
}