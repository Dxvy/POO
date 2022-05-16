//
// Created by davym on 28/04/2022.
//

#pragma once

#include <iostream>

#include <string>

/**
 * @namespace Utilitaires.
 * @brief Namespace contenant des fonctions utiles.
 */
namespace Utils {
    /**
     * Convertir une chaîne en minuscule.
     *
     * @param str Chaîne à convertir.
     *
     * @return La chaîne convertie en minuscules.
     */
    std::string tolower(std::string &str);
}

void selection();
int askIntInput(const std::string prompt);
