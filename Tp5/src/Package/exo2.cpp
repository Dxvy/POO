//
// Created by davym on 16/05/2022.
//
#include "../../include/exos.h"



void TP::EX2::package() {
    TP::EX2::Cercle c("C10", 10.0);
    c.affichage();
    c.perimetre();
    c.surface();

    TP::EX2::Rectangle r("R10", 10., 5.0);
    r.affichage();
    r.perimetre();
    r.surface();

    TP::EX2::Carre ca("CA10", 10.0);
    ca.affichage();
    ca.perimetre();
    ca.surface();

    TP::EX2::IFormeGeometrique *f = new Carre("CARR002", 12);
    f->affichage();
    delete f;
    *&f = nullptr;

    TP::EX2::IFormeGeometrique &f2 = ca;
    f2.affichage();
}