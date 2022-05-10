#include "./../include/exos.h"
#include "TPCpp/menu.h"
#include <iostream>

enum Sexe { Inconnue=0, Masculin=1, Feminin=2};

struct Personne
{
    int numero;
    std::string nom{};
    Sexe sexe;
};

using ptrPersonne = Personne*;

ptrPersonne creer()
{
    cout << "\nCréation d'une personne\n";
    return new Personne ;
}

void initialiser(ptrPersonne& pp){
    cout << "\nInitialisation de la personne\n";
    pp -> numero = 10;
    pp -> nom = "Raul";
    pp -> sexe = Masculin;
}

void afficher(const ptrPersonne& pp) {
    if (pp != nullptr) {
        cout << "\nLa Personne a pour numero [" << pp -> numero << "]";
        cout << "\nLa Personne se nomme [" << pp -> nom << "]";
        cout << "\nLa Personne est de sexe [" << pp -> sexe << "]\n";
    }
}
//Récupération numéro Personne
int& get_numero(const ptrPersonne& pp){
    cout << "\n";
    return pp->numero;
}
//Récupération nom Personne

std::string& get_nom(const ptrPersonne& pp){
    cout << "\n";
    return pp->nom;
}
//Récupération sexe Personne
Sexe& get_sexe(ptrPersonne& pp){
    cout << "\n";
    return pp->sexe;
}
void detruire(ptrPersonne& pp) {
    cout << "\nDestruction de la personne\n";
    delete pp;
    pp = nullptr;
}

void F_Personne() {
    cout << "\nBienvenue sur le TP 4.3 - Personne\n";

    ptrPersonne pp1 = nullptr;
    pp1 = creer();
    initialiser(pp1);
    afficher(pp1);
    get_nom(pp1);
    get_sexe(pp1);
    get_numero(pp1);
    detruire(pp1);
    afficher(pp1);
    selection();
}
