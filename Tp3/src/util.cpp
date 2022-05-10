//
// Created by davym on 07/04/2022.
//
#include "../include/main.h"

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

int askCharInput(const std::string prompt) {
    std::string input;
    cout << prompt;
    getline(cin, input);

    // test if input can be cast to char
    try {
        return input.at(0);
    } catch (std::out_of_range) {
        cout << "Invalid input. Please try again." << endl;
        return askCharInput(prompt);
    }
}

void menu() {
    int choix;
    cout << "\n\n\nChoisir un exercice: " << endl;
    cout << "0. Quitter" << endl;
    cout << "1. Macro" << endl;
    cout << "2. Personne" << endl;
    choix = askIntInput("\nQuel exercice voulez-vous lancer ? : ");
    switch (choix) {
        case 0:
            cout << "Au revoir" << endl;
            break;
        case 1:
            exo1();
            break;
        case 2:
            exo2();
            break;
        default:
            cout << "Saisie incorrecte!" << endl;
            menu();
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
            menu();
            break;
        default:
            cout << "Saisie incorrecte!" << endl;
            menu();
    }
}
