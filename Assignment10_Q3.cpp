#include<iostream>
using namespace std;
class person
    {
        private:
        char name[20];
        char gender;
        int age;
        public:
        void ReadPerson()
        {
            cout<<"Name: ";
            cin>>name;
            cout<<"gender: ";
            cin>>gender;
            cout<<"Age: ";
            cin>>age;
        }
        void DisplayPerson()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Gender: "<<gender<<endl;
            cout<<"Age: "<<age<<endl;
        }
};
class sports: public virtual person
{
    private: 
    char name[20];
    int score;
    protected:
    void ReadData()
    {
        cout<<"Game Played: ";
        cin>>name;
        cout<<"Game Score: ";
        cin>>score;
    }
    void DisplayData()
    {
        cout<<"Sports Played: "<<name<<endl;
        cout<<"game Score: "<<score<<endl;
    }
    int SportsScore()
    {
        return score; 
    }
};
class student : public virtual person
{
    private:
    int RollNo;
    char branch[20];
    public:
    void ReadData()
    {   
       cout<<"RollNo: ";
       cin>>RollNo;
       cout<<"Branch: ";
       cin>>branch;
    }
    void DisplayData()
    {
        cout<<"Roll_No: "<<RollNo<<endl;
        cout<<"Branch: "<<branch<<endl;
    }
};
class exam: public student
{
    protected:
    int SubMark_1;
    int SubMark_2;
    public:
    void ReadData()
    {
        cout<<"Mark of subject_1: ";
        cin>>SubMark_1;
        cout<<"Mark of subject_2: ";
        cin>>SubMark_2;
    }
    void DisplayData()
    {
        student::DisplayData();
        cout<<"Mark_Scored_in_Subject_1:"<<SubMark_1<<endl;
        cout<<"Mark_Scored_in_Subject_2: "<<SubMark_2<<endl;
        cout<<"Total_mark: "<<TotalMark()<<endl;
    }
    int TotalMark()
    {
        return SubMark_1 + SubMark_2;
    }
};
class result:public exam,public sports
{
    private:
    int total;
    public: 
    void ReadData()
    {
        ReadPerson();//access person class member
        student::ReadData();
        exam::ReadData();
        sports::ReadData();
    }
    void DisplayData()
    {
        DisplayPerson();//access person class member
        student ::DisplayData();
        exam::DisplayData();
        sports::DisplayData();
        cout<<"overall performance,(exam + sprots):"<<percentage()<<"%";
    }
    int percentage()
    {
        return (exam::TotalMark()+SportsScore())/3;
    }
};
int main()
{
    result student;
    cout<<"Enter data for student: "<<endl;
    student.ReadData();
    cout<<"Student Details: "<<endl;
    student.DisplayData();
    return 0;
}