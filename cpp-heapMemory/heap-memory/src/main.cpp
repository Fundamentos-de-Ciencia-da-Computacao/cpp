#include <iostream>

int main(){

    int *numPtr = new int;

    std::cout << "*numPtr: " << *numPtr << std::endl;
    std::cout << " numPtr: " << numPtr << std::endl;
    std::cout << "&numPtr: " << &numPtr << std::endl;
    std::cout << " " << std::endl;

    *numPtr = 42;
    std::cout << "*numPtr recebeu o valor 42" << std::endl;
    std::cout << " " << std::endl;
    
    std::cout << "*numPtr: " << *numPtr << std::endl;   
    std::cout << " numPtr: " << numPtr << std::endl;
    std::cout << "&numPtr: " << &numPtr << std::endl;
    std::cout << " " << std::endl;

    return 0;
}