#ifndef KOLO_HPP
#define KOLO_HPP

#include "Figura.hpp"

class Kolo : public Figura {
public:
    Kolo(double promien);
    double pole() const override;
    double obwod() const override;
    std::string nazwa() const override;
private:
    double promien;
};

#endif