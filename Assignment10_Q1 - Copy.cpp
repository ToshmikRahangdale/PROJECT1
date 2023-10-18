/*WAP to implement a C++ program to find out the area of the rectangle and triangle using hierarchical
inheritance .*/
#include<iostream>
using namespace std;
class shape
{
   protected:
    double width,height;
   public:
   // parameterized constructor
   shape(double w,double h)
   {
      width = w;
      height = h;
   }
};
//Derived class 1;
class Rectangle:public shape {
   public:
   //parameterized constructor
   Rectangle(double w,double h):shape(w,h)
   {

   }
   //Method to calculate area of rectangle
   double area()
   {
      return width * height;
   }
};
//Derived class 2
class Triangle:public shape{
   public:
   //parameterized constructor
   Triangle(double w,double h):shape(w,h){

   }
   //Method to calculate area f triangle 
   double area(){
      return 0.5*width*height;
   } 
};
int main()
{
   Rectangle r(10,5);
   Triangle t(8,6);
   //Display the area
   cout<<"Area of rectangle: "<<r.area()<<endl;
   cout<<"Area of triangle: "<<t.area()<<endl;
   return 0;
}
