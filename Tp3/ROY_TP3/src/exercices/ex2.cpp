#include "exercices/ex2.hpp"
#include "utils.hpp"

std::string sexe_to_string(const Sexe &sexe)
{
    switch (sexe)
    {
    case Sexe::FEMININ:
        return "Féminin";
    case Sexe::MASCULIN:
        return "Masculin";
    default:
        return "Inconnu";
    }
}

PtrPersonne creer_personne()
{
    return std::make_shared<Personne>();
}

void detruire_personne(PtrPersonne &p)
{
    if (!p) return
            p.reset();
    p =nullptr;

    std::cout << "Personne détruite." << '\n';
}

void initialiser_personne(PtrPersonne &p, const unsigned long &numero, const std::string& nom, const Sexe &sexe)
{
    if (!p) throw std::invalid_argument("Erreur 01 : Pointeur null");

    p->numero = numero;
    p->sexe = sexe;
    p->nom = nom;
}

void afficher_personne(const PtrPersonne &p)
{
    if (!p)
    {
        std::cout << "la persone n'existe pas " << std::endl;
        return;
    }

    const auto sexe_name = sexe_to_string(sexe_personne(p));
    auto numero = "0" + std::to_string(numero_personne(p));

    for (auto i = numero.size(); i > 1; i -= 2)
    {
        numero.insert(i, " ");
    }

    std::cout << "Personne créée :"
              << "\n  Numéro : " + numero
              << "\n  Nom : " + nom_personne(p)
              << "\n  Sexe : " + std::to_string(sexe_personne(p)) + " (" + sexe_name + ")"
              << '\n';
}

const std::string& nom_personne(const PtrPersonne &p)
{
    if (!p) throw std::invalid_argument("Erreur 03 : Pointeur null");

    return p->nom;
}

const Sexe& sexe_personne(const PtrPersonne &p)
{
    if (!p) throw std::invalid_argument("Erreur 04 : Pointeur null");

    return p->sexe;
}

const unsigned long& numero_personne(const PtrPersonne&p)
{
    if (!p) throw std::invalid_argument("Erreur 05 : Pointeur null");

    return p->numero;
}


void Test_Fonction()
{
    using namespace utils;

    auto p = creer_personne();
    auto name = "toto";
    initialiser_personne(p, 6'78'98'76'54ULL, name, Sexe::MASCULIN);

    myassert(nom_personne(p)==name,"Erreur Test : 001");
    myassert(numero_personne(p)==6'78'98'76'54ULL,"Erreur Test : 002");
    myassert(sexe_personne(p)==Sexe::MASCULIN,"Erreur Test : 003");
    myassert(sexe_to_string(p)=="Masculin","Erreur Test : 004");
    afficher_personne(p);
    detruire_personne(p);
    afficher_personne(p);

    try
    {
        nom_personne(p);
        myassert(false,"Erreur Test : 010");
    }
    catch ( std::invalid_argument& e)
    {
    }
    catch (...)
    {
        myassert(false,"Erreur Test : 011");
    }
    try
    {
        numero_personne(p);
        myassert(false,"Erreur Test : 020");
    }
    catch ( std::invalid_argument& e)
    {
    }
    catch (...)
    {
        myassert(false,"Erreur Test : 021");
    }
    try
    {
        sexe_personne(p);
        myassert(false,"Erreur Test : 030");
    }
    catch ( std::invalid_argument& e)
    {
    }
    catch (...)
    {
        myassert(false,"Erreur Test : 031");
    }
}
