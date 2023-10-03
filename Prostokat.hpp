#ifndef PROSTOKAT_HPP
#define PROSTOKAT_HPP

#include "Czworokat.hpp"

class Prostokat : public Czworokat {
public:
    Prostokat(double bok1, double bok2, double bok3, double bok4, double kat);
    double pole() const override;
    double obwod() const override;
    std::string nazwa() const override;
private:
    double bok1;
    double bok2;
    double bok3;
    double bok4;
    double kat;
};

#endif