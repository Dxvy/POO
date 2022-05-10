//
// Created by davym on 07/04/2022.
//

#include "../include/main.h"

void    exo1() {
    int a = 10;
    int &ref_a = a;
    int *ptr_a = new int[a];

    affiche(ptr_a);
    constructeur(ptr_a);
    affiche(ptr_a);
    destructeur(ptr_a);
    std::cout << ptr_a << std::endl;
}

void   affiche(int *ptr_a) {
    std::cout << "Valeur de pointeur  = " << *ptr_a << std::endl;
    std::cout << "Adresse de pointeur = " << &ptr_a << std::endl;
    std::cout << "Adresse pointee par pointeur = " << ptr_a << std::endl;
}

void    constructeur(int *ptr_a) {
    *ptr_a = 15;
    std :: cout << "Nouvelle valeur  = " << *ptr_a << std :: endl;
}

void   destructeur(int*& ptr_a) {
    delete ptr_a;
    ptr_a = nullptr;
}