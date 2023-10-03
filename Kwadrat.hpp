#ifndef KWADRAT_HPP
#define KWADRAT_HPP

#include "Czworokat.hpp"

class Kwadrat : public Czworokat {
public:
    Kwadrat(double bok);
    double pole() const override;
    double obwod() const override;
    std::string nazwa() const override;
private:
    double bok;
};

#endif