#include "TPCpp/menu.h"
#include "util.h"

namespace TPCpp {

    void Menu::execute() // Fonction d'affichage du menu
    {

        cout << "Quel exercice voulez-vous faire ? ";
        cout << "\n\n 0 -> Finir programme " << "\n\n 1 -> Jeu de carte 1" << "\n\n 2 -> Jeu de carte 2" << "\n\n3 -> Personne";
        Menu::runExecute();
    }

}