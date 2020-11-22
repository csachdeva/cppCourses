#include <iostream>

int main () {
   int intArr [] = {15, 30, 45, 60};
   std::cout << intArr[2] << std::endl;
   std::cout << *(intArr + 2) << std::endl;
   return 0;
}
