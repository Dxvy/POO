//
// Created by davym on 17/05/2022.
//

#ifndef TP5_EXO1_H
#define TP5_EXO1_H

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

#endif //TP5_EXO1_H
