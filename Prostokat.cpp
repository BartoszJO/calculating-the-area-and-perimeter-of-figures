#include "Prostokat.hpp"

Prostokat::Prostokat(double bok1, double bok2, double bok3, double bok4, double kat) {}

double Prostokat::pole() const {
    return bok1 * bok2;
}

double Prostokat::obwod() const {
    return 2 * (bok1 + bok2);
}

std::string Prostokat::nazwa() const {
    return "Prostokat";
}