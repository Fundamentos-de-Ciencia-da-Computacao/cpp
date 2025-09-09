#include "../include/Cube.h"
#include <iostream>

namespace uiuc {

    Cube::Cube() {
        length_ = 1.0; // valor padrão, pode ser alterado
        std::cout << "Criado R$" << getVolume() << " (padrão)" << std::endl;
    }

    Cube::Cube(double length) {
        length_ = length;
        std::cout << "Criado R$"<< getVolume() << std::endl;
    }

    Cube::Cube(const Cube & obj) {
        length_ = obj.length_;
        std::cout << "Criado R$"<< getVolume() << " via cópia" << std::endl;
    }

    Cube & Cube::operator=(const Cube & obj) {
        length_ = obj.length_;
        std::cout << "Transformado R$" << getVolume() << "-> R$" << obj.getVolume() << std::endl;

        length_ = obj.length_;

        return *this;
    }

    double Cube::getVolume() const{
        return length_ * length_ * length_;
    }

    double Cube::getSurfaceArea() const{
        return 6 * length_ * length_;
    }

    void Cube::setLength(double length) {
        length_ = length;
    }
}