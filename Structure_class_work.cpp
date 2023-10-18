/*Write a program to create a product structure and use it in the main function and processes it*/
#include<iostream>
using namespace std;

struct Product{
    int id;
    char name[50];
    double price ;
};
int main(){
    Product product1;
    product1.id = 111;
    strcyp(product1.name,"weight");
    product1.price = 600.00;

    cout<<"Product ID: "<<product1.id<<endl;
    cout<<"Product name: "<<product1.name>>endl;
    cout<<"Product price: "<<product1.price<<endl;

    return 0;
}o