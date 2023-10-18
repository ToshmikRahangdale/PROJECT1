#include <iostream> 
using namespace std; 
int main() 
{ 
    int x; 
    cout << "\nEnter value of x:"; 
    cin >> x; 
    try 
    { 
        if (x == 0) 
            throw(x); 
        if (x == 100) 
            throw('e'); 
        if (x = 1000) 
            throw(5.500); 
    } 
    catch (int x) 
    { 
        cout << "Value of x is zero:" << x; 
    } 
    catch (char x) 
    { 
        cout << "Value of x is character:" << x; 
    } 
    catch (double x) 
    { 
        cout << "Value of x is Double:" << x; 
} 
} 