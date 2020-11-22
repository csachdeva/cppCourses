#include <iostream>

struct X{
    int data;
};

int main(){
    std::cout << std::endl;
    
    int X:: * p = &X::data; // pointerType structName :: pointerName = &structName :: dataMember
    
    X object;
    object.data = 2011;
    
    X* objptr = new X;
    objptr->data = 2014;

    int k = object.*p;
    int l = objptr->*p;

    delete objptr;

    std::cout << "k: " << k << std::endl;
    std::cout << "l: " << l << std::endl;
    std::cout << std::endl;

    return 0;
}
