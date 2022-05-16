#include <algorithm>
#include "./../include/util.h"
<<<<<<< HEAD
#include "../include/TPCpp/menu.h"
=======
#include "../../Tp5/include/TPCpp/menu.h"
>>>>>>> b39acd90c767a8bbb9a9d97be7e0bd37de479816

std::string Utils::tolower(std::string &str) {
    std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c) {
        return std::tolower(c);
    });
    return str;
}

int askIntInput(const std::string prompt) {
    std::string input;
    cout << prompt;
    getline(cin, input);

    // test if input can be cast to int
    try {
        return stoi(input);
    } catch (std::invalid_argument) {
        cout << "Invalid input. Please try again." << endl;
        return askIntInput(prompt);
    }
}

void selection() {
    int choix;
    cout << "\n\n\nOptions possible : ";
    cout << "\n0 - Quitter l'interface " << "\n1 - Retour au menu";
    choix = askIntInput("\n\nQue voulez-vous faire ? : ");
    switch (choix) {
        case 0:
            cout << "Au revoir" << endl;
            break;
        case 1:
            TPCpp::Menu::execute();
            break;
        default:
            cout << "Saisie incorrecte!" << endl;
            TPCpp::Menu::execute();
    }
}