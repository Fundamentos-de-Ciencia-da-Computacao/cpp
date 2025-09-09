#include <iostream>
#include "../Aula-2/Cube.h"

int main(){
    Cube c;
    c.setLength(2.4);
    std::cout << "Volume: " << c.getVolume() << std::endl;

    double surfaceArea = c.getSurfaceArea();
    std::cout << "Surface Area: " << surfaceArea << std::endl;

    return 0;
}