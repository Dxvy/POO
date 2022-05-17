//
// Created by davym on 16/05/2022.
//

#ifndef TP5_BFORME_H
#define TP5_BFORME_H
// Header 2
/**
 * @namespace Exercice 2.
 * @brief Namespace pour l'exercice 2.
 *
 * L'exercice 2 est un exercice de manipulation de classes avec de multiples méthodes.
 * Cet exercice introduit les classes abstraites, les interfaces et la surcharge de méthodes.
 */
namespace TP::EX2 {

    /**
     * @interface IFormeGeometrique
     * @brief Interface pour les formes géométriques.
     *
     * Cette interface est utilisée pour définir les formes géométriques.
     */
    class IFormeGeometrique {
    public:
        /**
         * @brief Affiche des informations sur la forme.
         *
         * Cette méthode permet d'afficher des informations sur la forme géométrique.
         */
        virtual void affichage() const = 0;


        /**
         * @brief Retourne le nom.
         * @return Le nom de la forme.
         */
        virtual std::string getNom() const noexcept = 0;

        /**
         * @brief Calcule le périmètre de la forme.
         * @return Le périmètre de la forme.
         *
         * Cette méthode permet de calculer le périmètre de la forme géométrique.
         */
        virtual double perimetre() const noexcept = 0;

        /**
         * @brief Calcule la surface de la forme.
         * @return La surface de la forme.
         *
         * Cette méthode permet de calculer la surface de la forme géométrique.
         */
        virtual double surface() const noexcept = 0;

        /**
         * @brief Destructeur virtuel.
         *
         * Ce destructeur virtual appelle une expression de debugage.
         */
        virtual ~IFormeGeometrique() { DEBUG("~IFormeGeometrique()"); }
    };
}
#endif //TP5_BFORME_H
