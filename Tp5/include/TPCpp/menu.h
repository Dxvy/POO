//
// Created by davym on 28/04/2022.
//

#ifndef TP5_MENU_H
#define TP5_MENU_H

#include <iostream>
#include "../util.h"
#include "../exos.h"

using std::cout;
using std::cin;
using std::endl;
void execute(void);
void runExecute(const int &n);
void heritage();

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
                    heritage();
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

#endif //TP5_MENU_H
