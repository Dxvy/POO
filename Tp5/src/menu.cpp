#include "TPCpp/menu.h"
#include "util.h"

namespace TPCpp {

    void Menu::execute() // Fonction d'affichage du menu
    {

        cout << "Quel exercice voulez-vous faire ? ";
        cout << "\n\n 0 -> Finir programme " << "\n\n 1 -> Tp 1.1" << "\n\n 2 -> Tp 1.2";
        Menu::runExecute();
    }

}