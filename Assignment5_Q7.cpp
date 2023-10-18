/*7. Write a program to find a substring within a string. If found display its starting position.*/
#include<iostream>
using namespace std;
int main()
{
    char str1[20],str2[20];
    cout<<"Enter the first string: ";
    cin.getline(str1,20);
    cout<<"ENter the second string: ";
    cin.getline(str2,20);

    int  i,j,flag = 0, str_index = -1;
    for(int i=0; str1[i] != '\0';i++){
    
        int k= i;
        for(int j=0;str2[j] != '\0';j++){
            if(str1[i] == str2[j]){
                k++;
            }else{
                break;
            }
        }
        if(str2[j] == '\0'){
            flag =1;
            str_index = i;
            break;
        }
    }
        if(flag ){
            cout<<"Substrin found at Index: "<<str_index<<endl;
        }else{
            cout<<"Substring not found: ";//<<endl;
        }
    
    return 0;
}
