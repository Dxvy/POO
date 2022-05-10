#pragma once

#include <conio.h>
#include <iostream>
#include "exercices/ex1.hpp"
#include "exercices/ex2.hpp"
#include "utils.hpp"

/**
 * @brief Exécute l'exercice demandé.
 *
 * Prend un entier en entrée et exécute l'exercice correspondant.
 *
 * @param n le numéro de l'exercice à exécuter.
 */
void runExercice(const int &n);

/**
 * @brief Affiche la liste des exercices disponibles.
 */
void show_exercices_list();

/**
 * @brief Affiche le menu principal.
 *
 * Affiche le menu, demande à l'utilisateur de choisir un exercice, exécute l'exercice, affiche à nouveau le menu après.
 * L'utilisateur peut quitter le programme en écrivant "exit".
 */
void show_menu();
