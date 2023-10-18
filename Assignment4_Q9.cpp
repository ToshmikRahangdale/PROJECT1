/*9. Write a program to multiply 2 matrices. */
#include<iostream>
using namespace std;
int main()
{
    int r1,c1,r2,c2;
    cout<<"Enter the no. of rows for matrix1: ";
    cin>>r1;
    cout<<"Enter the no. of column for matrix1: ";
    cin>>c1;
    cout<<"Enter the no. of rows for matrixr2: ";
    cin>>r2;
    cout<<"Enter the no. of column for matrix2: ";
    cin>>c2;

    int matrix1[r1][c1],matrix2[r2][c2],multiplication[r1][c1];
    cout<<endl;
    if(r1==c1){
        cout<<"Element of matrix1: ";
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                cout<<"enter the "<<i<<"row"<<j<<"column element: ";
                cin>>matrix1[i][j];
            }
        }
        cout<<endl;
        cout<<"Enter the element of matrix2: "<<endl;
        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
                cout<<"Enter the "<<i<<"row"<<j<<"column element: ";
                cin>>matrix2[r2][c2];
            }
        }
        cout<<endl;
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                multiplication[i][j]=0;
            }
        }
        for (int i = 0; i < r1; i++){
            for (int j = 0; j < c1; j++){
                for (int k = 0; k < c2; k++)
                multiplication[i][j] += matrix1[i][k]*matrix2[k][j];
           }   
        }
        cout<<"Elements of multiplication marix are: "<<endl;
        for (int i = 0; i < r1; i++){
            for(int j= 0;j<c2;j++){
                cout<<multiplication[i][j]<<" ";
            }
            cout<<endl;
        }     
            }
            else
            cout<<"Matrix multiplication is not possible";
            return 0;
}
