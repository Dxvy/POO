//
// Created by davym on 28/04/2022.
//

#pragma once
#include <iostream>
#include "../util.h"
#include "../exos.h"

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
                    Partie5::EX1::exo1();
                    selection();
                    break;
                case 2:
                    TP::EX2::package();
                    selection();
                    break;
                default:
                    cout << "Choix invalide." << endl;
                    Menu::execute();
            }
        }
    };
}

