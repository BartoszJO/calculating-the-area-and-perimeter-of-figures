#include "Szesciokat.hpp"

Szesciokat::Szesciokat(double bok) : bok(bok) {}

double Szesciokat::pole() const {
    return (3 * sqrt(3) * bok * bok) / 2;
}

double Szesciokat::obwod() const {
    return 6 * bok;
}

std::string Szesciokat::nazwa() const {
    return "Szesciokat";
}