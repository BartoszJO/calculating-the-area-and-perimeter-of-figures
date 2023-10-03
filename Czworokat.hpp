#ifndef CZWOROKAT_HPP
#define CZWOROKAT_HPP

#include "Figura.hpp"

class Czworokat : public Figura {
public:
    virtual double pole() const = 0;
    virtual double obwod() const = 0;
};

#endif