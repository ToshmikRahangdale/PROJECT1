#include<iostream>
using namespace std;
class NumPairs
{
    private:
    int num1,num2;
    public:
    void read()
    {
        cout<<"Enter first number:  "<<endl;
        cin>>num1;
        cout<<"Enter second number: "<<endl;
        cin>>num2;
    }
    int max()
    {
        if(num1>num2)
        return num1;
        else
        return num2;
    }
    void showMax()
    {
        cout<<"Maximum "<<max()<<endl;
    }
};
int main()
{
    NumPairs n1;
    n1.read();
    n1.showMax();
    return 0;
}