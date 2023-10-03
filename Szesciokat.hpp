#ifndef SZESCIOKAT_HPP
#define SZESCIOKAT_HPP

#include "Figura.hpp"

class Szesciokat : public Figura {
public:
    Szesciokat(double bok);
    double pole() const override;
    double obwod() const override;
    std::string nazwa() const override;
private:
    double bok;
};

#endif