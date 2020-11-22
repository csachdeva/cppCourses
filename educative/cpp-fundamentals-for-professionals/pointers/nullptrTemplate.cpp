#include <iostream>

template <class P>
void functionTemplate(P p) {
    int* a = p; 
}

int main () {
    int* a = 0;
    int* b = NULL;
    int* c = nullptr;

    // functionTemplate(0); // compiler complain : invalid conversion from ‘int’ to ‘int*’ 
    // functionTemplate(NULL); // compiler complain : invalid conversion from ‘long int’ to ‘int*’
    functionTemplate(nullptr);
    return 0;
}
