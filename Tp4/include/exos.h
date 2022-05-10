//
// Created by davym on 28/04/2022.
//

#ifndef TP4_EXOS_H
#define TP4_EXOS_H

#include <iostream>
#include <array>

namespace Partie4 {

    inline static const std::array<std::string, 4> NomCouleur = {"PIQUE", "COEUR", "CARREAU", "TREFLE"};

    // Namespace Jeu de carte 1
    namespace JeuDeCarte1 {

        class Carte {
        public:
            static void JeuDeCarte1();

            enum Couleur : unsigned short {
                PIQUE, COEUR, CARREAU, TREFLE
            };

            // constructeur
            Carte(Couleur couleur, const std::string &valeur);

            // constructeur - copie
            Carte(Carte &crt);

            // destructeur
            ~Carte();

            // propri�t� setter -> type
            void setType(const Couleur couleur);

            // propri�t� setter -> valeur
            void setValeur(const std::string &valeur);

            //-> m�thode - afficher
            void afficher() const;

            inline bool equal(Carte &carte) {
                if (this->_couleur == carte._couleur) {
                    if (this->_valeur == carte._valeur) { return true; }
                    else { return false; }
                } else {
                    return false;
                }
            }

            void affecter(Carte &carte);


        private:
            // Attributs
            Couleur _couleur;
            std::string _valeur;


        };

    }

    // Namespace Jeu de carte 2
    namespace JeuDeCarte2 {

        enum class Couleur : unsigned short {
            PIQUE, COEUR, CARREAU, TREFLE
        };

        class Carte {
        public:
            static void JeuDeCarte2();

            // constructeur
            Carte(Couleur couleur, const std::string &valeur);

            // constructeur - copie
            Carte(Carte &crt);

            // destructeur
            ~Carte();

            Carte &operator=(const Carte &);

            inline bool operator==(const Carte &c) const {
                std::cerr << "operator==" << std::endl;
                if (&c == this) return true;
                return (this->_couleur == c._couleur &&
                        this->_valeur == c._valeur);
            }

            inline bool operator!=(const Carte &c) const {
                std::cerr << "operator!=" << std::endl;
                if (&c == this) return false;
                return (!(this->operator==(c)));
            }

            // propri�t� setter -> type
            void setType(const Couleur couleur);

            // propri�t� setter -> valeur
            void setValeur(const std::string &valeur);

            // Attribut - Nombre de cr�ation
            static unsigned NbCreation;

            // propri�t� getter -> Nombre de cr�ation
            //static unsigned GetNbCreation();

            friend std::ostream &operator<<(std::ostream &, const Carte &);

        private:
            // Attributs
            Couleur _couleur;
            std::string _valeur;
        };

    }
//    class TP {
//    public:
//    };
}

void F_Personne();

#endif //TP4_EXOS_H
