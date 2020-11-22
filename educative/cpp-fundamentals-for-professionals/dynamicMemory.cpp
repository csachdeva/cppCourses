#include <iostream>

int main () {
   float* fltptr = new float(50.505); // A float has been created in dynamic memory
   std::cout << *fltptr << std::endl;
   delete fltptr;

   int* intArray = new int[10]; // A dynamic array of size 10 has been created 
   intArray[0] = 20;
   std::cout << intArray[0] << std::endl;
   delete [] intArray;
   
   return 0;
}
