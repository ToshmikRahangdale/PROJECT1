#include<iostream>
//#include<cmath>
using namespace std;
int area(int l, int b )
{
    return l*b;
}
float area(float r )
{
    return 3.14 * r* r;
}
double area(double b ,double h )
{
    return  (b * h)/2;
}
int main()
{
    int le,br;
    float ra;
    double base,hight;
    cin>>le>>br;
    cout<<"Area of rectangle: "<<area(le,br)<<endl;
    cin>>ra;
    cout<<"Area of circle: "<<area(ra)<<endl;
    cin>>base>>hight;
    cout<<"Area of triangle: "<<area(base,hight)<<endl;
    
    return 0;

}