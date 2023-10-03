#define _USE_MATH_DEFINES

#include "Pieciokat.hpp"
#include <cmath>

Pieciokat::Pieciokat(double bok) : bok(bok) {}

double Pieciokat::pole() const {
    return (5 * bok * bok) / (4 * tan(M_PI / 5));
}

double Pieciokat::obwod() const {
    return 5 * bok;
}

std::string Pieciokat::nazwa() const {
    return "Pieciokat";
}