/*WAP to implement a C++ program to find out the student details using multilevel inheritance.*/
#include<iostream>
using namespace std;
//const int MAX_LEN = 25;
class person
{
    private:
    char name[25];
    char gender;
    int age;
    public:
    void ReadData()
    {
        cout<<"Name: ";
        cin>>name;
        cout<<"Gender: ";
        cin>>gender;
        cout<<"Age: ";
        cin>>age;
    }
    void DisplayData()
    {
        cout<<"Name: "<<name<<endl;
         cout<<"Genger: "<<gender<<endl;
          cout<<"Age: "<<age<<endl;
    }
};
class student:public person //publicaly derived intermidete base class 
{
    private:
    int rollNo;
    char branch[20];
    public:
    void ReadData()
    {
        person::ReadData();//use readData for person class
        cout<<"Roll No: ";
        cin>>rollNo;
        cout<<"Branch: ";
        cin>>branch;
    }
    void DisplayData()
    {
        person::DisplayData();//use display data for person class
        cout<<"Roll No: "<<rollNo<<endl;
        cout<<"Branch: "<<branch<<endl;
    }
};
class exam:public student
{
    private:
    int SubMark_1;
    int SubMark_2;
    public: 
    void ReadData()
    {
        student::ReadData();
        cout<<"Mark scored in Sub_1:";
        cin>>SubMark_1;
        cout<<"Mark scored in Sub_2: ";
        cin>>SubMark_2;
    }
    void DisplayData()
    {
        student::DisplayData();
        cout<<"Mark scored in Subject_1: "<<SubMark_1<<endl;
        cout<<"Mark scored in Subject_2: "<<SubMark_2<<endl;
        cout<<"Total Mark: "<<TotalMark(); 
    }
    int TotalMark()
    {
        return SubMark_1 + SubMark_2;
    }
};
int main()
{
    exam annual;
    cout<<"Enter data for student "<<endl;
    annual.ReadData();
    cout<<"Student Details: "<<endl;
    annual.DisplayData();

}