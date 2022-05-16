//
// Created by davym on 17/05/2022.
//

#ifndef TP5_CERCLE_H
#define TP5_CERCLE_H
#include "../exos.h"

// Header Cercle
/**
 * @namespace Exercice 2.
 * @brief Namespace pour l'exercice 2.
 *
 * L'exercice 2 est un exercice de manipulation de classes avec de multiples méthodes.
 * Cet exercice introduit les classes abstraites, les interfaces et la surcharge de méthodes.
 */
namespace TP::EX2 {
    /**
     * @class Cercle
     * @brief Forme géométrique cercle.
     *
     * Cette classe représente un cercle.
     */
    class Cercle : public TP::EX2::AFormeGeometrique {
    public:
        /**
         * @brief Constructeur.
         * @param nom Nom de la forme.
         * @param rayon Rayon du cercle.
         *
         * Constructeur de la classe Cercle, définit le nom et le rayon du cercle.
         */
        Cercle(const std::string& nom, double rayon) : AFormeGeometrique(nom), a_rayon(rayon) {}

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

    private:
        /**
         * @brief Rayon du cercle.
         */
        double a_rayon;
    };
}
#endif //TP5_CERCLE_H
