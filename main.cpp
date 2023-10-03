#include <iostream>
#include <string>
#include <cstdlib> // ???
#include "Figura.hpp"
#include "Kolo.hpp"
#include "Kwadrat.hpp"
#include "Prostokat.hpp"
#include "Romb.hpp"
#include "Pieciokat.hpp"
#include "Szesciokat.hpp"

int main(int argc, char* argv[]) {
    if (argc != 8) {
        std::cerr << "Uzycie: " << argv[0] << " <typ> <parametrty>" << std::endl;
        return 1;
    }

    char typ = argv[1][0];
    double parametry[6];

    for (int i = 0; i < 6; i++) {
        parametry[i] = atof(argv[i + 2]); // ???
    }

    Figura* figura = nullptr; // ???

    switch (typ) {
        case 'o':
            if (argc != 3) {
                std::cerr << "Uzycie: " << argv[0] << " o <promien>" << std::endl;
                return 1; 
            }
            figura = new Kolo(parametry[0]);
            break;
        case 'c':
            if (argc != 7) {
                std::cerr << "Uzycie: " << argv[0] << " c <bok1> <bok2> <bok3> <bok4> <kat>" << std::endl;
                return 1;
            }
            figura = new Romb(parametry[0], parametry[4]);
            break;
        case 'p':
            if (argc != 3) {
                std::cerr << "Uzycie: " << argv[0] << " p <bok>" << std::endl;
                return 1;
            }
            figura = new Pieciokat(parametry[0]);
            break;
        case 's':
            if (argc != 3) {
                std::cerr << "Uzycie: " << argv[0] << " s <bok>" << std::endl;
                return 1;
            }
            figura = new Szesciokat(parametry[0]);
            break;
        default:
            std::cerr << "Nieznany typ figury" << std::endl;
            return 1;
    }

    std::cout << "Nazwa figury: " << figura->nazwa() << std::endl;
    std::cout << "Obwod: " << figura->obwod() << std::endl;
    std::cout << "Pole: " << figura->pole() << std::endl;

    delete figura;

    return 0;
}