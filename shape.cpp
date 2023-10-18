/*Implement function overriding by creating class shape through which area of figures are calculated.*/
#include<iostream>
using namespace std;
class Shape
{
    protected: 
    float  length;
    float breadth;
    float height;
    public:
    virtual void area()
    {
        cout<<"Area of Figers: "<<endl;
    }
};
class Square :public Shape
{
    public: 
    Square()
    {
        length = 0;
    }
    Square(float a)
    {
        length = a;
    }
    void area()
    {
        float a =length*length;
        cout<<"Area of Square: "<<a<<endl;
    }
};
class Rectangle : public Shape
{
    public:
    Rectangle()
    {
        length = 0;
        breadth= 0;
    }
    Rectangle(float l,float b)
    {
        length = l;
        breadth = b;
    }
    void area()
    {
        float a = length * breadth;
        cout<<"Area of Rectangle: "<<a<<endl;
    }
};
class Triangle : public Shape
{
    public:
    Triangle()
    {
        length = 0;
        height = 0;
    }
    Triangle(float l,float h)
    {
        length = l;
        height = h;
    }
    void area()
    {
        float a = 0.5*length*height;
        cout<<"Area of triangle is: "<< a <<endl;
    }
};
int main()
{
    Shape *ptr;
    Shape s;
    ptr = &s;
    ptr->area();

    Square sq(9);
    ptr = &sq;
    ptr->area();

    Rectangle r(6,9);
    ptr = &r;
    ptr ->area();

    Triangle t(8,4);
    ptr = &t;
    ptr ->area();
    return 0;


}    