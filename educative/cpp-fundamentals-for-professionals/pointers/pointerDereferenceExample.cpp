#include <iostream>

int main () {
    int intArray[] = {1, 2, 3, 4, 5};
    
    if (intArray[3] == *(intArray + 3))
       std::cout << "Pointer arithmetic works" << std::endl;

    return 0;
}
