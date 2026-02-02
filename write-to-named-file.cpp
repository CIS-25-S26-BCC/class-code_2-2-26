#include <iostream>
#include <fstream> // Need this!

int writeToFile(std::string nameOfTheFile) {
    std::ofstream outputFile; // Create an output file stream object

    outputFile.open(nameOfTheFile); // Open (or create) a file

    for (int i = 1; i <= 10; i++) {
        outputFile << i << std::endl; // Write the number and a newline to the file
    }

    outputFile.close(); // Always close the file when you're done

    std::cout << "Done writing to file." << std::endl;

    return 7;
}

int main() {

    std::string fileName;

    std::cout << "Say the name of the first file that you want to use: ";
    std::cin >> fileName;

    int x = writeToFile(fileName);

    std::cout << "The signal we got back from writeToFile is: " << x;
    
    return 0;
}
