#include<iostream>
using namespace std;
class distance
{
    private:
    float feet;
    float inches;
    public:
    void init(int ft,int in)
    {
        feet = ft;
        inches = in;
    }
    void read(){
        cout<<"Enter feet: ";cin>>feet;
        cout<<"Enter inches: ";cin>>inches;
    }
    void show()
    {
        cout<<feet<<"-"<<inches<<endl;
    }
    void add(distance d1,distance d2)
    {
        feet = d1.feet+d2.feet;
        inches = d1.inches+d2.inches;
        if(inches>=12.0)
        {
            feet  = feet +1.0;
            inches= inches -12.0;
        }
    }
};
int main()
{
    distance d1,d2,d3;
    d2.init(12.0,32.2);
    d1.read();
    cout<<"d1 = ";
    d1.show();
    cout<<"d2 = ";
    d2.show();
    //d3.add(d1,d2);
    d3 = d1+d2;
    cout<<"\nd3 = d1+d2 =";
    d3.show();
    return 0;
}