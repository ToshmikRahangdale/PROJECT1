#include <iostream>

int main() {
    int n = 5; // Number of rows

    for (int i = n - 1; i >= 0; i--) {
        char ch = 'A';

        // Print characters in decreasing order from 'A' to 'E' and then from 'E' to 'A'
        for (int j = 0; j <= i; j++) {
            std::cout << ch;
            ch++;
        }

        // Print spaces
        for (int j = 0; j < n * 2 - 2 * (i + 1); j++) {
            std::cout << " ";
        }

        ch--;

        // Print characters in decreasing order from 'E' to 'A' and then from 'A' to 'E'
        for (int j = 0; j <= i; j++) {
            std::cout << ch;
            ch--;
        }

        std::cout << std::endl;
    }

    return 0;
}
