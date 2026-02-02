#include <iostream>

using namespace std;

int main() {

    int number = 5;

    do {
        cout << "Doing the do!" << endl;
        number = number + 1;
    } while (number < 5);

    return 0;
}