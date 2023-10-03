#ifndef PIECIOKAT_HPP
#define PIECIOKAT_HPP

#include "Figura.hpp"

class Pieciokat : public Figura {
public:
    Pieciokat(double bok);
    double pole() const override;
    double obwod() const override;
    std::string nazwa() const override;
private:
    double bok;
};

#endif