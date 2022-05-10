//
// Created by davym on 28/04/2022.
//

#ifndef TP4_MENU_H
#define TP4_MENU_H

#include <iostream>
#include "util.h"
#include "exos.h"
using std::cout;
using std::cin;
using std::endl;
void execute(void);
void runExecute(const int &n);

namespace TPCpp {
    class Menu {
    public :
        static void execute();
        static void runExecute() // Fonction d'exécution du menu
        {
            int choix = askIntInput("\n\n Saisir votre choix : ");
            switch (choix) {
                case 0:
                    cout << "Au revoir" << endl;
                    break;
                case 1:
                    Partie4::JeuDeCarte1::Carte::JeuDeCarte1();
                    break;
                case 2:
                    Partie4::JeuDeCarte2::Carte::JeuDeCarte2();
                    break;
                case 3:
                    F_Personne();
                    break;
                default:
                    cout << "Choix invalide." << endl;
                    Menu::execute();
            }
        }
    };
}

#endif //TP4_MENU_H
