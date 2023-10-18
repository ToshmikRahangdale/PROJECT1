/*Class student contains roll number, name and course as data member and Input_student and
display_student as member function. A derived class exam is created from the class student with
publicly inherited. The derived class contains mark1, mark2, mark3 as marks of three subjects and
input_marks and display_result as member function. Create an array of object of the exam class and
display the result of 5 students. Try the same program with privately inheritance.*/
#include<iostream>
using namespace std;
class student
{
    protected:
    int rollNo;
    char name[20];
    char course[20];
    public:
    void getData()
    {
        cout<<"Enter Roll No: ";
        cin>>rollNo;
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Course: ";
        cin>>course;
    }
    void DisplayData()
    {
        cout<<"Roll_No: "<<rollNo<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Course: "<<course<<endl;
    }
};
class exam:public student
{
    private:
    int mark1;
    int mark2;
    int mark3;
    public:
    void getData()
    {
        cout<<"Enter mark1: ";
        cin>>mark1;
        cout<<"Enter mark2: ";
        cin>>mark2;
        cout<<"Enter mark3: ";
        cin>>mark3;
    }
    void DisplayData()
    {
        cout<<"Mark1: "<<mark1<<endl;
        cout<<"Mark2: "<<mark2<<endl;
        cout<<"Mark3: "<<mark3<<endl;
        int total =mark1 + mark2 + mark3;
        float average = total /3.0;
        cout<<"Total mark: "<<total<<endl;
        cout<<"Average mark: "<<average<<endl;
    }
};
int main()
{
    exam ex[5];
    
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter details and mark for 5 student:"<<i+1<<endl;
        ex[i].getData();
        ex[i].getData();
    }
    
    for(int i=0;i<5;i++)
    {
        cout<<"Displaying result for 5 student"<<i+1<<endl;
        ex[i].DisplayData();
        cout<<endl;
    }
    return 0;
}