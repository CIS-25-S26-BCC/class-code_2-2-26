#include <iostream>

using namespace std;

int main() {

    int number = 0;

    while (number < 5) {
        number = number + 1;
        cout << "The number is " << number << endl;
        
    }

    for(int otherNumber = 0; otherNumber < 5; otherNumber = otherNumber + 1) {
        cout << "The other number is " << otherNumber << endl;
    }

    return 0;
}