#include <iostream> 
using namespace std; 
template <class T> 
class Queue 
{ 
private: 
    T *array; 
    int size; 
    int back; 
    int front; 
 
public: 
    Queue(int s = 5) 
    { 
        size = s; 
        array = new T[size]; 
        back = -1; 
        front = -1; 
    } 
    void push(T value) 
    { 
        if (back == size - 1) 
        { 
            cout << "Queue is full:" << endl; 
        } 
        else 
        { 
            if (front == -1) 
                front = 0; 
            back++; 
            array[back] = value; 
        } 
    } 
    T pop() 
    { 
        T data = 0; 
        if (front == -1) 
        { 
            cout << "Queue is Empty:" << endl; 
        } 
        else 
        { 
            data = array[front]; 
            front++; 
        } 
        return data; 
    } 
 
    ~Queue() 
    { 
        delete[] array; 
    } 
}; 
int main() 
{ 
    Queue<char> a(26); 
    for (int i = 0; i < 26; i++) 
    { 
        a.push(char(65 + i)); 
    } 
    cout << "Queue Data:"; 
    for (int i = 0; i < 26; i++) 
    { 
        cout << a.pop() << " "; 
    } 
    cout << endl; 
    return 0; 
} 