#ifndef ROMB_H
#define ROMB_H

#include "Czworokat.hpp"

class Romb : public Czworokat {
public: 
    Romb(double bok, double kat); // zamiast double kat -> double alpha?
    double pole() const override;
    double obwod() const override;
    std::string nazwa() const override;
private:
    double bok;
    double kat;
};

#endif