#include "./../include/exos.h"
#include "TPCpp/menu.h"

    namespace Partie4 {

        namespace JeuDeCarte1 {

            //const std::array<std::string, 4> Carte::NomCouleur = { "PIQUE", "COEUR", "CARREAU", "TREFLE" };

            //constructeur
            Carte::Carte(Couleur couleur, const std::string& valeur)
            :
            _couleur(couleur),
                    _valeur(valeur)
            {};

            //copie constructeur
            Carte::Carte(Carte& crt)
            :
            Carte(crt._couleur, crt._valeur)
            {};

            // destructeur
            Carte::~Carte() {
                std::cout << __func__ << std::endl;
            }

            // setter type - copie et donne la couleur de la carte passé en paramètre
            void Carte::setType(const Couleur couleur) {
                this->_couleur = couleur;
            }

            // setter de valeur - copie et donne la valeur de la carte passé en paramètre
            void Carte::setValeur(const std::string& valeur) {
                this->_valeur = valeur;
            }

            // méthode d'affichage - affiche l'objet suivis par sa couleur et sa valeur
            void Carte::afficher() const {
                std::cout << std::endl <<  "Carte [ " << this << " ]" << std::endl;
                std::cout << this->_valeur << " de " << NomCouleur[this->_couleur] << std::endl;
            }

            // méthode d'affectation - copie et donne les propriétés de la carte passé en paramètre
            void Carte::affecter(Carte& carte) {
                this->_couleur = carte._couleur;
                this->_valeur = carte._valeur;
            }

            void Carte::JeuDeCarte1() {
                std::cout << "\nBienvenue sur le TP 4.1 - Jeu de Carte (1) \n";

                JeuDeCarte1::Carte c1(JeuDeCarte1::Carte::PIQUE, "As");
                c1.afficher();

                JeuDeCarte1::Carte c2(c1);
                c2.afficher();
                c2.setType(JeuDeCarte1::Carte::TREFLE);
                c2.setValeur("REINE");
                c2.afficher();
                JeuDeCarte1::Carte c3(JeuDeCarte1::Carte::PIQUE, "2");
                c2.affecter(c3);
                c2.afficher();
                c3.afficher();

                if (c1.equal(c2)) {
                    cout << "C'est bon" << endl;
                }
                else {
                    std::cerr << endl << "Une erreur est survenue: Les cartes ne sont pas egales" << endl;
                    c1.afficher();
                    c2.afficher();
                }
            }
        }

    }