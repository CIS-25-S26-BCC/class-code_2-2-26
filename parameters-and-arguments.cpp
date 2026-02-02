#include <iostream>

// This function returns an int
int sum(int num1, int num2) {
    result = num1 + num2;
    return result; // Send the value of `result` back
}

int main() {
    int total = sum(5, 10); // Call the function and store the returned value
    std::cout << result;
    std::cout << "The sum is: " << total << std::endl; // Prints 15
    return 0;
}
