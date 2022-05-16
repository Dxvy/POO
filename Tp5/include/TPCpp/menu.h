//
// Created by davym on 28/04/2022.
//

#pragma once
#include <iostream>
#include "../util.h"
#include "../exos.h"
<<<<<<< HEAD
=======
#include "../../include/TPCpp/menu.h"
>>>>>>> b39acd90c767a8bbb9a9d97be7e0bd37de479816

using std::cout;
using std::cin;
using std::endl;
<<<<<<< HEAD
void execute(void);
void runExecute(const int &n);
void heritage();
=======
void package();
>>>>>>> b39acd90c767a8bbb9a9d97be7e0bd37de479816

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
                    Partie5::EX1::exo1();
                    break;
                case 2:
                    TP::EX2::package();
                    break;
                default:
                    cout << "Choix invalide." << endl;
                    Menu::execute();
            }
        }
    };
}

