#ifndef FIGURA_HPP
#define FIGURA_HPP

#include <string> // do usuniecia

class Figura {
public:
    virtual double pole() const = 0;
    virtual double obwod() const = 0;
    virtual std::string nazwa() const = 0;
    virtual ~Figura() {}
};

#endif