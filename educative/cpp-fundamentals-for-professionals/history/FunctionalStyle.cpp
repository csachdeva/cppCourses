#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

int main() {
    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<std::string> str {"Programming", "in", "a", "functional", "style."};

    std::cout << std::accumulate(vec.begin(), vec.end(), 1, 
		    [](int a, int b) {return a * b;}) << std::endl; // 362880


    std::cout << std::accumulate(str.begin(), str.end(), std::string{}, 
		    [](std::string a, std::string b) { return a + ":" + b;}) << std::endl;
                // "Programming:in:a:functional:style."

    std::transform(vec.begin(), vec.end(), vec.begin(), 
	       [] (int i) { return i * i;}); // {1, 4, 9, 16, 25, 36, 49, 64, 81}	

    for(int val: vec) std::cout << val << ", ";
    std::cout << std::endl; 

    auto it = std::remove_if(vec.begin(), vec.end(), 
		    [](int i) { return ((i < 3) || (i > 8));}); // {3, 4, 5, 6, 7, 8}

    for(int val: vec) std::cout << val << ", ";
    std::cout << std::endl; 
   
    for(std::vector<int>::iterator itStart = vec.begin(); itStart != it; itStart++) std::cout << *itStart << ", ";
    std::cout << std::endl;
      
    auto it2 = std::remove_if(str.begin(), str.end(),
		   [](std::string s){ return (std::tolower(s[0])); }); // "Programming"

    for(std::string val: str) std::cout << val << ", ";
    std::cout << std::endl; 
    
    for(std::vector<std::string>::iterator itStart = str.begin(); itStart != it2; itStart++) std::cout << *itStart << ", ";
    std::cout << std::endl;
      
    auto it3 = std::remove_if(str.begin(), str.end(),
		   [](std::string s){ return (std::islower(s[0])); }); // "Programming"

    for(std::string val: str) std::cout << val << ", ";
    std::cout << std::endl; 
    
    for(std::vector<std::string>::iterator itStart = str.begin(); itStart != it3; itStart++) std::cout << *itStart << ", ";
    std::cout << std::endl;
      
    return 0;     
}
