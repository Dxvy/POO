//
// Created by davym on 16/05/2022.
//
#include "../../include/exos.h"
#include "../../include/TPCpp/menu.h"


void TP::EX2::Cercle::affichage() const {
    std::cout << "Cercle de diamètre " << a_rayon * 2 << '\n';
    std::cout << "Périmètre " << perimetre() << '\n';
    std::cout << "Surface " << surface() << '\n';
}

double TP::EX2::Cercle::perimetre() const noexcept {
    return 2 * M_PI * a_rayon;
}

double TP::EX2::Cercle::surface() const noexcept {
    return M_PI * a_rayon * a_rayon;
}