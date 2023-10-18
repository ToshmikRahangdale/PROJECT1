/*A University and a Company have jointly taken a project. Class University contains name of the
university, department to which the project is assigned, person to whom the project is assigned. A
function display is there to display the information. Class Company contains name of the company,
Number of Engineers assigned, amount invested to do the project. A function display is there to display
the information. Class Project is inherited from University and Company. It contains type of project,
duration of project, amount granted to complete the project. A function display displays the related
information. Write a C++ program to implement this and display all information except amount invested
by company from Project class*/
#include<iostream>
using namespace std;
class University
{
    private:
    char UniversityName[25];
    char deptName[25];
    char personName[25];
    public:
    University()
    {
        cout<<"Enter the name of university:  ";
        cin>>UniversityName;
        cout<<"ENter the name of the Department: ";
        cin>>deptName;
        cout<<"Enter the Person name: ";
        cin>>personName;
    }
    void DisplayData()
    {
        cout<<"University Name: "<<UniversityName<<endl;
        cout<<"Department Name: "<<deptName<<endl;
        cout<<"Person Name: "<<personName<<endl;
    }
};
class Company
{
    private:
    char CompanyName[25];
    int NoOfEngineer;
    double Amount;
    public:
    Company()
    {
        cout<<"Enter the Company name: ";
        cin>>CompanyName;
        cout<<"Enter the No Of Engineer: ";
        cin>>NoOfEngineer;
        cout<<"Enter the Amount invested to the project: ";
        cin>>Amount;
    }
    void DisplayData()
    {
        cout<<"Company Name: "<<CompanyName<<endl;
        cout<<"No of Engineer: "<<NoOfEngineer;
        cout<<"Amount: "<<Amount<<endl;
    } 
};
class Project :public University , public Company
{
    private:
    char ProjectType[25];
    int ProjectDuration;
    double ProjectAmount;
    public:
    Project()
    {
        cout<<"Enter the type of project: ";
        cin>>ProjectType;
        cout<<"Enter the Project Duration: ";
        cin>>ProjectDuration;
        cout<<"Enter the Project  Amount: ";
        cin>>ProjectAmount;
    }
    void DisplayData()
    {
        cout<<"Type of project: "<<ProjectType<<endl;
        cout<<"Duration of the Project: "<<ProjectDuration<<endl;
        cout<<"Total Amount of the project: "<<ProjectAmount<<endl;
    }
};
int main()
{
    Project pr;
    pr.University::DisplayData();
    pr.Company::DisplayData();
    pr.DisplayData();
    
}

