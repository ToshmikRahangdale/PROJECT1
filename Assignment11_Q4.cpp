/*
WAP Simple calculator using Class template
*/
#include <iostream> 
using namespace std; 
template <class T> 
class calculator 
{ 
private: 
    T num1, num2; 
 
public: 
    calculator(T n1, T n2) 
    { 
        num1 = n1; 
        num2 = n2; 
    } 
    void displayResult() 
    { 
        cout << "Numbers are:" << num1 << " and " << num2 << endl; 
        cout << "Addition is:" << add() << endl; 
        cout << "substraction is:" << substract() << endl; 
        cout << "Product is:" << multiply() << endl; 
        cout << "Division is:" << divide() << endl; 
    } 
    T add() 
    { 
        return num1 + num2; 
    } 
    T substract() 
    { 
        return num1 - num2; 
    } 
    T multiply() 
    { 
        return num1 * num2; 
    } 
    T divide() 
    { 
        return num1 / num2; 
    } 
}; 
int main() 
{ 
    calculator<int> intcalc(21, 12); 
    calculator<float> floatcalc(21.4, 11.2); 
    cout << "Int Results:" << endl; 
    intcalc.displayResult(); 
    cout << "Float Results:" << endl; 
    floatcalc.displayResult(); 
    return 0; 
} 