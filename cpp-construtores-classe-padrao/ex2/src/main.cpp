#include <iostream>
#include "Cube.h"

int main() {
    uiuc::Cube c(2.0);
    std::cout << "Volume: " << c.getVolume() << std::endl;  

    return 0;
}