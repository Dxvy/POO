#include "./../include/exos.h"
#include "TPCpp/menu.h"

namespace Partie4 {

    namespace JeuDeCarte2 {

        //constructeur
        Carte::Carte(Couleur couleur, const std::string& valeur)
                :
                _couleur(couleur),
                _valeur(valeur)
        {};

        //constructeur - copie
        Carte::Carte(Carte& crt)
                :
                Carte(crt._couleur, crt._valeur)
        {};

        // destructeur
        Carte::~Carte() {
            std::cout << __func__ << std::endl;
        }

        Carte& Carte::operator=(const Carte& c) {
            std::cerr << "operator=" << std::endl;
            if (&c != this) {
                this->_couleur = c._couleur;
                this->_valeur = c._valeur;
            }
            return *this;
        }

        // setter type - enumération Couleur
        void Carte::setType(const Couleur couleur) {
            this->_couleur = couleur;
        }

        // setter valeur - string valeur
        void Carte::setValeur(const std::string& valeur) {
            this->_valeur = valeur;
        }

        /*static unsigned GetNbCreation() {
            return this->NbCreation;
        };*/

        std::ostream& operator<<(std::ostream& flux, const Carte& carte)
        {
            //Affichage des attributs
            flux << "Carte: " << carte._valeur << " de " << NomCouleur[static_cast<int>(carte._couleur)];
            return flux;
        }
        void Carte::JeuDeCarte2() {
            std::cout << "\nBienvenue sur le TP 4.2 - Jeu de Carte (2) \n";

            JeuDeCarte2::Carte c1(JeuDeCarte2::Couleur::PIQUE, "As");
            cout << c1 << endl;

            JeuDeCarte2::Carte c2(c1);
            cout << c2 << endl;

            c2.setType(JeuDeCarte2::Couleur::TREFLE);
            c2.setValeur("REINE");
            cout << c2 << endl;
            if (c1 != c2) {
                cout << "C'est bon" << endl;
            }
            else {
                std::cerr << "Une erreur est survenue" << endl;
            }
        }
    }
}