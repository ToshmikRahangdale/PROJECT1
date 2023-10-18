    /*5. Write a program to compare two strings they are exact equal or not.*/
    #include<iostream>
    using namespace std;
    int main()
    {
        char s1[30];
        char s2[30];
        char* ptr1 = s1;
        char* ptr2 = s2;
        cout<<"Enter string 1: ";
        cin.getline(s1,30);
        cout<<"Enter string 2: ";
        cin.getline(s2,30);
        int flag = 0;
        while (*ptr1 != '\0' && *ptr2 != '\0')
        {
            if(*ptr1 != *ptr2){
                flag = 1;
                break;
            }
            ptr1++;
            ptr2++;
        }
        if(*ptr1 != '\0'|| *ptr2 != '\0')
        flag =1;
        if(flag)
        cout<<"String is not equal: ";
        else{
            cout<<"String is equal: ";
            return 0;
            }
    }