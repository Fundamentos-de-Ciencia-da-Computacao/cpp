#include <iostream>
#include "../include/Cube.h"

using uiuc::Cube;

double cuboStack() {
    Cube c(3);
    return c.getVolume();
}

void cuboHeap() {
    Cube * c1 = new Cube(10);
    Cube * c2 = new Cube();
    delete c1;
}

int main(){

    cuboStack();
    cuboHeap();
    cuboStack();
    return 0;

}
