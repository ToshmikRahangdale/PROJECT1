#include<iostream>
#include<cstring>
using namespace std;
class student
{
    private:
    int roll_no;
    char name[50];

    public:
    void setdata(int roll_no_in, char* name_in)
    {
        roll_no =roll_no_in;
        strcpy(name,name_in);
    }
    void outdata()
    {
        cout<<"Roll no: "<<roll_no<<endl;
        cout<<"Name: "<<name<<endl;
    }
};
int main()
{
    student s1;
    student s2;
    s1.setdata(10,"mayur");
    s2.setdata(20,"abhi");
    cout<<"Student details"<<endl;
    s1.outdata();
    s2.outdata();
    return 0;
}