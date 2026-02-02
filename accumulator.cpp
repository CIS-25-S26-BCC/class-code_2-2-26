#include <iostream>

using namespace std;

int main() {
    
int sum = 0;
    for(int otherNumber = 0; otherNumber <= 1000; otherNumber++) {
        
        sum = sum + otherNumber;
        cout << "The otherNumber is " << otherNumber << endl;
        cout << "The sum is " << sum << endl;
    }

    return 0;
}