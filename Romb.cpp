#include "Romb.hpp"
#include <cmath>

Romb::Romb(double bok, double kat) : bok(bok), kat(kat) {}

double Romb::pole() const {
    return bok * bok * sin(kat);
}

double Romb::obwod() const {
    return 4 * bok;
}

std::string Romb::nazwa() const {
    return "Romb";
}