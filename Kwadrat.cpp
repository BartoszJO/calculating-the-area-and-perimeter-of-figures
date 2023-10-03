#include "Kwadrat.hpp"

Kwadrat::Kwadrat(double bok) : bok(bok) {}

double Kwadrat::pole() const {
    return bok * bok;
}

double Kwadrat::obwod() const {
    return 4 * bok;
}

std::string Kwadrat::nazwa() const {
    return "Kwadrat";
}