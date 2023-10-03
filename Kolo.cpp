#define _USE_MATH_DEFINES

#include "Kolo.hpp"
#include <cmath>

Kolo::Kolo(double r) : promien(r) {} // definicja konstruktora klasy Kolo

double Kolo::pole() const {
    return M_PI * promien * promien;
}

double Kolo::obwod() const {
    return 2 * M_PI * promien;
}

std::string Kolo::nazwa() const {
    return "Kolo";
}