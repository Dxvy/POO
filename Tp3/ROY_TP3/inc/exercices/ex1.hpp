#pragma once

#ifndef ISDEBUG
#define DEBUG(message)
#else
#include <iostream>

/**
 * @def DEBUG(message)
 *
 * @brief Écrit un message de debug dans la console.
 *
 * Écrit un message dans la console en utilisant std::cout et affiche le nom du fichier et la ligne actuelle.
 *
 * @param message Le message à écrire.
 */
#define DEBUG(message) std::cout << __FILE__ << ":" << __LINE__ << ": " << message << '\n';

#endif // ISDEBUG

/**
 * @def MAX(a, b)
 *
 * @brief Retourne le plus grand entre deux nombres.
 *
 * @param a Le premier nombre.
 * @param b Le second nombre.
 *
 * @warning N'utilise aucune conversion ni sécurité.
 */
#define MAX(a, b) ((a) > (b) ? (a) : (b))

void ex1();
