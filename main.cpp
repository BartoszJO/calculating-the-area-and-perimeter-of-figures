#include <iostream>
#include <string>
#include <cstdlib>
#include "Figura.hpp"
#include "Kolo.hpp"
#include "Romb.hpp"
#include "Pieciokat.hpp"
#include "Szesciokat.hpp"
#include "Kwadrat.hpp"
#include "Prostokat.hpp"

int main(int argc, char* argv[]) {
    if (argc <= 2) {
        std::cerr << "Uzycie: " << argv[0] << " <typ> <parametry>" << std::endl;
        return 1;
    }

    char typ = argv[1][0];
    double* parametry = new double[argc - 2];

    for (int i = 0; i < argc - 2; i++) {
        parametry[i] = atof(argv[i + 2]);
        std::cout << parametry[i] << std::endl;
    }

    Figura* figura = nullptr;

    switch (typ) {
        case 'o':
            if (argc != 3) {
                std::cerr << "Uzycie: " << argv[0] << " o <promien>" << std::endl;
                delete[] parametry;
                return 1;
            }
            figura = new Kolo(parametry[0]);
            break;
        case 'c':
            if (argc != 7) {
                std::cerr << "Uzycie: " << argv[0] << " c <bok1> <bok2> <bok3> <bok4> <kat>" << std::endl;
                delete[] parametry;
                return 1;
            }

            if (parametry[0] == parametry[1] && parametry[3] == parametry[4] && parametry[0] == parametry[2] && parametry[5] != 90) {
                figura = new Romb(parametry[0], parametry[4]); 
            }

            if (parametry[0] == parametry[1] && parametry[3] == parametry[4] && parametry[0] == parametry[2] && parametry[5] == 90) {
                figura = new Kwadrat(parametry[0]);
            }

            if (parametry[0] != parametry[2] && parametry[1] != parametry[4] && parametry[0] == parametry[1] && parametry[5] == 90) {
                figura = new Prostokat(parametry[0], parametry[1], parametry[2], parametry[3],parametry[4]);
            }
       
            break;
        case 'p': // gittttttttttttttttttttttttt
            if (argc != 3) {
                std::cerr << "Uzycie: " << argv[0] << " p <bok>" << std::endl;
                delete[] parametry;
                return 1;
            }
            figura = new Pieciokat(parametry[0]);
            break;
        case 's': // gittttttttttttttttttttttttt
            if (argc != 3) {
                std::cerr << "Uzycie: " << argv[0] << " s <bok>" << std::endl;
                delete[] parametry;
                return 1;
            }
            figura = new Szesciokat(parametry[0]);
            break;
        default:
            std::cerr << "Nieznany typ figury" << std::endl;
            delete[] parametry;
            return 1;
    }

    std::cout << "Nazwa figury: " << figura->nazwa() << std::endl;
    std::cout << "Obwod: " << figura->obwod() << std::endl;
    std::cout << "Pole: " << figura->pole() << std::endl;

    delete figura;
    delete[] parametry;

    return 0;
}