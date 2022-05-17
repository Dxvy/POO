//
// Created by davym on 17/05/2022.
//

#ifndef TP5_RECTANGLE_H
#define TP5_RECTANGLE_H
#include "AForme.h"


// Header Rectangle
/**
 * @namespace Exercice 2.
 * @brief Namespace pour l'exercice 2.
 *
 * L'exercice 2 est un exercice de manipulation de classes avec de multiples méthodes.
 * Cet exercice introduit les classes abstraites, les interfaces et la surcharge de méthodes.
 */
namespace TP::EX2 {
    /**
     * @class Rectangle
     * @brief Forme géométrique rectangle.
     *
     * Cette classe représente un rectangle.
     */
class Rectangle : public AFormeGeometrique {
    public:
        /**
         * @brief Constructeur.
         * @param nom Nom de la forme.
         * @param largeur Largeur du rectangle.
         * @param hauteur Hauteur du rectangle.
         *
         * Constructeur de la classe Rectangle, définit le nom, la longueur et la largeur du rectangle.
         */
        Rectangle(const std::string &nom, double longueur, double largeur) : AFormeGeometrique(nom), a_longueur(longueur), a_largeur(largeur) {
        }

        /**
         * @copydoc TP::EX2::IFormeGeometrique::affichage()
         */
        void affichage() const override;

        /**
         * @copydoc TP::EX2::IFormeGeometrique::perimetre()
         */
        double perimetre() const noexcept override;

        /**
         * @copydoc TP::EX2::IFormeGeometrique::surface()
         */
        double surface() const noexcept override;

    protected:
        /**
         * @brief Longueur du rectangle.
         */
        double a_longueur;
        /**
         * @brief Largeur du rectangle.
         */
        double a_largeur;
    };
}

#endif //TP5_RECTANGLE_H
