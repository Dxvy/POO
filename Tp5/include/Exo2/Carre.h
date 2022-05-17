//
// Created by davym on 17/05/2022.
//

#ifndef TP5_CARRE_H
#define TP5_CARRE_H
#include "AForme.h"
#include "rectangle.h"

// Header carré
/**
 * @namespace Exercice 2.
 * @brief Namespace pour l'exercice 2.
 *
 * L'exercice 2 est un exercice de manipulation de classes avec de multiples méthodes.
 * Cet exercice introduit les classes abstraites, les interfaces et la surcharge de méthodes.
 */
namespace TP::EX2 {
    /**
     * @class Carre
     * @brief Forme géométrique carré.
     *
     * Cette classe représente un carré, elle hérite de la classe Rectangle.
     */
    class Carre : public TP::EX2::Rectangle {
    public:
        /**
         * @brief Constructeur.
         * @param nom Nom de la forme.
         * @param longueur Longueur du côté du carré.
         *
         * Constructeur de la classe Carre, définit le nom et la longueur du côté du carré.
         */
        Carre(const std::string& nom, double longueur) : TP::EX2::Rectangle(nom, longueur, longueur) {}

        /**
         * @copydoc TP::EX2::BForme::affichage()
         */
        void affichage() const override;
    };
}
#endif //TP5_CARRE_H
