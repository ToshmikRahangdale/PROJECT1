#include <iostream>
using namespace std;
#include <string>
#include <sstream>

int main() {
    string input_string;

    
    cout << "Enter a string: ";
    getline(cin, input_string);

    stringstream ss(input_string);
    string word;
    int word_count = 0;

    while (ss >> word) {
        word_count++;
    }

    cout << "Number of words in the string: " << word_count <<endl;

    return 0;
}
