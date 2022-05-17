#include "../include/Exo1.h"


void Partie5::EX1::Personne::setNom(const std::string &nom, const unsigned &numero, const Sexe &sexe) {
    this->nom = nom;
    this->numero = numero;
    this->sexe = sexe;
}

void Partie5::EX1::Personne::afficher() const{
    std::cout << "Nom: " << this->nom << std::endl;
    std::cout << "Numero: " << this->numero << std::endl;
    std::cout << "Sexe: " << this->sexe << std::endl;
}

const std::string &Partie5::EX1::Personne::getNom() const {
    return this->nom;
}

const unsigned &Partie5::EX1::Personne::getNumero() const {
    return this->numero;
}

const Partie5::EX1::Sexe &Partie5::EX1::Personne::getSexe() const {
    return this->sexe;
}

Partie5::EX1::Personne::~Personne() {
    std::cout << "Destructeur de Personne" << std::endl;
}

Partie5::EX1::Personne::Personne() {
    std::cout << "Constructeur de Personne" << std::endl;
}

std::ostream &Partie5::EX1::operator<<(std::ostream &os, const Partie5::EX1::Sexe &sexe) {
    switch (sexe) {
        case Partie5::EX1::Sexe::FEMME:
            os << "FEMME";
            break;
        case Partie5::EX1::Sexe::HOMME:
            os << "HOMME";
            break;
        default:
            os << "INCONNU";
            break;
    }
    return os;
}

void Partie5::EX1::Etudiant::aff_Notes() const {
    std::cout << "Moyenne: " << Get_Moyenne() << "/" << MaxNote << std::endl;
    std::cout << "Note la plus elevee: " << Get_Max() << "/" << MaxNote << std::endl;
    std::cout << "Note la plus basse: " << Get_Min() << "/" << MaxNote << std::endl;
}

float Partie5::EX1::Etudiant::Get_Moyenne() const{
    auto moyenne = 0.0;
    for (auto note: m_note) {
        moyenne += note;
    }
    return moyenne / static_cast<float>(m_note.size());
}

float Partie5::EX1::Etudiant::Get_Max() const{
    auto max = 0.0;
    for (auto note: m_note) {
        if (note > max) {
            max = note;
        }
    }
    return max;
}

float Partie5::EX1::Etudiant::Get_Min() const{
    auto min = 0.0;
    for (auto note: m_note) {
        if (note < min) {
            min = note;
        }
    }
    return min;
}

void Partie5::EX1::Etudiant::Set_Notes(float note) {
    if (note > MaxNote || note < MinNote) {
        throw std::invalid_argument("Nombre de note invalide");
    }
    m_note.push_back(note);
}

void Partie5::EX1::exo1() {
    auto etudiant = Partie5::EX1::Etudiant();
    etudiant.setNom("Dupont", 07'15'01'55'44, Partie5::EX1::Sexe::HOMME);
    etudiant.Set_Notes(10);
    etudiant.Set_Notes(12);
    etudiant.Set_Notes(15);
    etudiant.Set_Notes(20);
    etudiant.Set_Notes(18);
    etudiant.Set_Notes(15);
    etudiant.aff_Notes();
}