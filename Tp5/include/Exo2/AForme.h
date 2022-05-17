//
// Created by davym on 16/05/2022.
//

#ifndef TP5_AFORME_H
#define TP5_AFORME_H
#include "BForme.h"

/**
 * @namespace Exercice 2.
 * @brief Namespace pour l'exercice 2.
 *
 * L'exercice 2 est un exercice de manipulation de classes avec de multiples méthodes.
 * Cet exercice introduit les classes abstraites, les interfaces et la surcharge de méthodes.
 */
// Header 1
namespace TP::EX2 {

    /**
     * @class AFormeGeometrique
     * @brief Classe abstraite pour les formes géométriques.
     */
    class AFormeGeometrique : public IFormeGeometrique {
    public:
        /**
         * @brief Constructeur par défaut.
         *
         * Initialise le nom de la forme géométrique.
         */
        explicit AFormeGeometrique(std::string nom) : a_nom(std::move(nom)) {}

        /**
         * @brief Retourne le nom de la forme géométrique.
         */
        std::string getNom() const noexcept override;
    private:
        std::string a_nom;
    };
}
#endif //TP5_AFORME_H
