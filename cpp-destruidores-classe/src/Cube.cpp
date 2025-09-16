#include "../include/Cube.h"
#include <iostream>

using std::cout;
using std::endl;

namespace uiuc {

    Cube::Cube() {
        cout << "Criado R$1 (padrão)" << endl;
    }

    Cube::Cube(double length) {
        length_ = length;
        cout << "Criado R$"<< getVolume() << endl;
    }

    Cube::Cube(const Cube & obj) {
        length_ = obj.length_;
        cout << "Criado R$"<< getVolume() << " via cópia" << endl;
    }

    Cube::~Cube() {
        cout << "Destruído R$" << getVolume() << endl;
    }

    Cube & Cube::operator=(const Cube & obj) {
        length_ = obj.length_;
        cout << "Transformado R$" << getVolume() << "-> R$" << obj.getVolume() << endl;

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