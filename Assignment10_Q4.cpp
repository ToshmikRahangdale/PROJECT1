/*Implement function overriding by creating class shape through which area of figures are calculated.*/
#include<iostream>
using namespace std;
class shape
{
    protected:
    float length;
    float breadth; 
    public:
    virtual float area_Calculation()=0;
    shape(float l):length(l){}
    shape(float l,float b):length(l),breadth(b){}
    
};
class Square : public shape
{
    public:
    Square(float l):shape(l){}
    float area_Calculation()
    {
        return length*length;
    }
};
class Rectangle : public shape
{
    public:
    Rectangle(float l,float b) : shape(l,b)
    {}
    float area_Calculation()
    {
        return length * breadth;
    }
};
class Circle:public shape
{
    public:
    Circle(float l):shape(l){}
    float area_Calculation()
    {
       return  3.147 *length * length;
    }
};
int main()
{
    shape *sh;
    Square s(15);
    sh = &s;

    cout<<"square: "<<sh->area_Calculation()<<endl;

    Rectangle r(8,6);
    sh = &r;
    cout<<"Rec: "<<sh->area_Calculation()<<endl;

    Circle c(6);
    sh =&c;
    cout<<"Cir: "<<sh->area_Calculation()<<endl;

    return 0;
}