#include <iostream>

enum OldNum {
   one = 1,
   ten = 10,
   hundred = 100,
   thousand = 1000
};

// even we can use class
enum struct NewNum {
   one = 1, 
   ten = 10, 
   hundred = 100, 
   thousand = 1000
};

int main () {
   std::cout << std::endl;
   
   std::cout << "C++98 = " << 2 * thousand + 0 * hundred + 1 * ten + 1 * one << std::endl;
   std::cout << "C++11 = " << 2 * static_cast<int>(NewNum::thousand) + 
	   		      0 * static_cast<int>(NewNum::hundred)  +
			      1 * static_cast<int>(NewNum::ten) +
			      1 * static_cast<int>(NewNum::one) << std::endl;

   return 0;
}
