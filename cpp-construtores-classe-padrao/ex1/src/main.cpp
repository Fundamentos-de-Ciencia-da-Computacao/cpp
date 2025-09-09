#include <iostream>
#include "Cube.h"


int main() {
    uiuc::Cube c;
    std::cout << "Volume: " << c.getVolume() << std::endl;

    std::cout << " " << std::endl;

    std::cout << "Surface Area: " << c.getSurfaceArea() << std::endl;

    return 0;
}