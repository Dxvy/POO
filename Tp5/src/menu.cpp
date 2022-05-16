<<<<<<< HEAD
#include "../include/TPCpp/menu.h"
=======
#include "../../Tp5/include/TPCpp/menu.h"
>>>>>>> b39acd90c767a8bbb9a9d97be7e0bd37de479816

namespace TPCpp {

    void Menu::execute() // Fonction d'affichage du menu
    {

        cout << "Quel exercice voulez-vous faire ? ";
        cout << "\n\n 0 -> Finir programme " << "\n\n 1 -> Tp 1.1 Héritage" << "\n\n 2 -> Tp 1.2 Package";
        Menu::runExecute();
    }

}