/*WAP to implement bubble short using function template */
#include<iostream>
using namespace std;
template <class T>
class BubbleSort
{
    private:
    T *arr;
    int size;
    public:
    BubbleSort(T *a, int s)
    {
        arr=a;
        size=s;
    }
    void sort()
    {
        for (int i = 0; i < size; i++)
        {
            for(int j=0; j<size-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    T temp =arr[j];
                    arr[j] =arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    }
    void display()
    {
        for(int i =0; i<size; i++)
        {
            cout<<arr[i]<<" ";
        } 
        cout<<endl;
    }
};
int main()
{
    int arr[] ={10,50,40,5,14,11,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    BubbleSort<int>bs(arr,n);
    cout<<"Before Swapping: "<<endl;
    bs.display();
    cout<<"After Swapping: "<<endl;
    bs.sort();
    bs.display();
    return 0;
}