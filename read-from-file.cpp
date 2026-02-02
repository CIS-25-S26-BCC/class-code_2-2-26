#include <iostream>
#include <fstream>

int main() {
    std::ifstream inputFile;
    inputFile.open("numbers.txt");
    int number;

   // This is a standard C++ pattern for reading a file until the end
    while (inputFile >> number) {
        std::cout << number << std::endl;
    }

   inputFile.close();
    return 0;
}
