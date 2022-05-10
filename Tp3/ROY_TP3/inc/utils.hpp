#pragma once

#include <string>
#include <algorithm>
#include <iostream>

namespace utils {
/**
 * @brief Convertit un string en minuscule.
 *
 * Convertit chaque caractère du string en minuscule.
 *
 * @param str Chaîne à convertir.
 * @return La chaîne convertie en minuscules.
 */
inline std::string& tolower(std::string &str) {
	std::transform(str.begin(), str.end(), str.begin(), ::tolower);
	return str;
}

inline void myassert(bool test , std::string msg){
    if ( ! test )
        std::cerr << "Erreur " << msg << std::endl;
}
}
