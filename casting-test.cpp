#include <iostream>

bool boolFunction(bool myBool) {
    return myBool;
}

int main() {
    std::cout << boolFunction(!0) << std::endl;
    return 0;
}
