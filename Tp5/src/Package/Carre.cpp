//
// Created by davym on 16/05/2022.
//
#include "../../include/exos.h"
#include "../../include/TPCpp/menu.h"

void TP::EX2::Carre::affichage() const {
    cout << "Carré de côté " << a_longueur << '\n';
    cout << "Périmètre : " << perimetre() << '\n';
    cout << "Surface : " << surface() << '\n';
}