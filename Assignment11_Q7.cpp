#include <iostream> 
#include <fstream> 
using namespace std; 
int main() 
{ 
ifstream fin; 
fin.open("String.cpp"); 
cout << "data of the file given below:\n\n" 
<< endl; 
char c; 
fin.seekg(30, ios::beg); 
while (!fin.eof()) 
{ 
c = fin.get(); 
cout << c; 
} 
fin.close(); 
return 0; 
} 
