#include<iostream>
using namespace std;
class date
{
    private:
    int day;
    int month ;
    int year;
    public:
    void set(int dayIn,int monthIn,int yearIn)
    {
        day = dayIn;
        month = monthIn;
        year = yearIn;
    }
    void show()
    {
         cout << day << "-" << month << "-" << year << endl;
    }
};
int main()
{
    date d1,d2,d3;
    d1.set(15, 7, 1997);
    d2.set(25, 5, 1960);
    d3.set(10, 12, 1970);

    cout << "first" << endl;
     d1.show();
    cout<<"second"<<endl;
    d2.show();
    cout<<"third"<<endl;
    d3.show();
    return 0;
}
    