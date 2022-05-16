//
// Created by davym on 28/04/2022.
//


<<<<<<< HEAD
#include <string>
#include "utility"
#include "debug.h"
#include "cmath"
#include "Exo2/AForme.h"
#include "Exo2/BForme.h"
#include "Exo2/Carre.h"
#include "Exo2/Cercle.h"
#include "Exo2/rectangle.h"

// Header exos
/**
 * @namespace Exercice 2.
 * @brief Namespace pour l'exercice 2.
 *
 * L'exercice 2 est un exercice de manipulation de classes avec de multiples méthodes.
 * Cet exercice introduit les classes abstraites, les interfaces et la surcharge de méthodes.
 */
namespace TP::EX2 {
    void package();
}
=======
#pragma once
>>>>>>> b39acd90c767a8bbb9a9d97be7e0bd37de479816

#include <iostream>
#include <string>
#include <vector>

namespace Partie5::EX1 {
    enum class Sexe : char {
        INCONNU = 'I',
        MASCULIN = 'M',HOMME,
        FEMININ = 'F', FEMME,
    };

    std::ostream &operator<<(std::ostream &os, const Sexe &sexe);

    class Personne {
    public:
        Personne();
        ~Personne();
        void setNom(const std::string &nom, const unsigned &numero, const Sexe &sexe);
        void afficher() const;
        const std::string &getNom() const;
        const unsigned &getNumero() const;
        const Sexe &getSexe() const;

    private:
        std::string nom;
        unsigned numero;
        Sexe sexe;
    };

}

namespace Partie5::EX1 {
    class Etudiant : public Personne {
    public:
        using Personne::Personne;

        static const  auto MinNote = 0;
        static const  auto MaxNote = 20;
        void aff_Notes() const;
        float Get_Moyenne() const;
        float Get_Max() const;
        float Get_Min() const;
        void Set_Notes(float note);

        private:
        std::vector<float> m_note;

    };
}

namespace Partie5::EX1 {
    void exo1();
}
