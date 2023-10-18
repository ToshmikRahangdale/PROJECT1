/*8. Write a program to add 2 matrices. */
#include<iostream> 
using namespace std;
int main()
{
    int  r,c;
    cout<<"Enter the row of the matrix: ";
    cin>>r;
    cout<<"Enter the column of the matrix: ";
    cin>>c;
    
    int matrix1[r][c],matrix2[r][c],result[r][c];

    cout<<"Enter the elements of matrix1: "<<endl;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++)
        {
            cout<<"Enter the "<<i<<"row"<<j<<"column element: ";
            cin>>matrix1[i][j];
        }
    }
    cout<<"Enter the element of matrix2: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"Enter the "<<i<<"row"<<j<<"column element: ";
            cin>>matrix2[i][j];
        }
    }
    cout<<"Element of result matrix are: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            result[i][j]=matrix1[i][j]+matrix2[i][j];
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}