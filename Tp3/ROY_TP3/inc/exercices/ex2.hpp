#pragma once

#include <memory>
#include <iostream>

/**
 * @enum Sexe
 * @brief Enumération des Sexes disponibles.
 *
 * Les sexes disponibles sont utilisées pour la structure personne pour définir le sexe d'une personne.
 * Elle est sous-jacente du type `unsigned char`.
 *
 * @see Personne
 */
enum Sexe : unsigned char {
	/**
	 * @brief Inconnu
	 *
	 * Le sexe de la personne n'est pas connu.
	 */
	INCONNU = 0U,

	/**
	 * @brief Masculin
	 *
	 * Le sexe de la personne est un homme.
	 */
	MASCULIN = 1U,

	/**
	 * @brief Féminin
	 *
	 * Le sexe de la personne est une femme.
	 */
	FEMININ = 2U
};

/**
 * @struct Personne
 * @brief Structure représentant une personne.
 *
 * La structure représente une personne avec son nom, son numéro de téléphone et son sexe.
 */
struct Personne {

	/**
	 * @brief Numéro de la personne.
	 *
	 * Le numéro de la personne est un entier positif.
	 */
	unsigned long numero;

	/**
	 * @brief Nom de la personne.
	 *
	 * Le nom de la personne est une chaîne de caractères.
	 */
	std::string nom;

	/**
	 * @brief Sexe de la personne.
	 *
	 * Le sexe de la personne est un valeur de l'enumération `Sexe`.
	 */
	Sexe sexe;

	Personne():numero(0),nom(),sexe(){}
};

using PtrPersonne = std::shared_ptr<Personne>;
/**
 * @brief Convertit un sexe donné en son nom.
 *
 * Renvoie le nom du sexe donné.
 *
 * @param sexe Le sexe à convertir.
 * @return Le nom du sexe.
 */
std::string sexe_to_string(const Sexe &sexe);

/**
 * @brief Créé une personne.
 *
 * Crée une personne avec aucune données.
 *
 * @return La personne créée dans un unique_ptr.
 */
PtrPersonne creer_personne();

/**
 * @brief Détruit une personne.
 *
 * Détruit une personne via son unique_ptr.
 *
 * @param p Le pointeur de la personne à détruire.
 */
void detruire_personne(PtrPersonne& p);

/**
 * @brief Initialise une personne.
 *
 * Initialise une personne son nom, son numéro et son sexe.
 *
 * @param p Le pointeur de la personne à initialiser.
 * @param numero Le numéro de la personne à utiliser.
 * @param nom Le nom de la personne à utiliser.
 * @param sexe Le sexe de la personne à utiliser.
 */
void initialiser_personne(PtrPersonne & p, const unsigned long &numero, const std::string& nom, const Sexe &sexe);

/**
 * @brief Affiche une personne.
 *
 * Affiche une personne avec son numéro, son nom et son sexe.
 *
 * @param p Le pointeur de la personne à afficher.
 */
 void afficher_personne(const PtrPersonne& p);

/**
 * @brief Renvoie le nom d'une personne.
 *
 * Renvoie le nom de la personne pointée .
 *
 * @param p la personne dont on veut le nom.
 * @return Le nom de la personne pointée .
 */
const std::string& nom_personne(const PtrPersonne& p);

/**
 * @brief Renvoie le sexe d'une personne.
 *
 * Renvoie le numéro de la personne pointée .
 *
 * @param p la personne dont on veut le numéro.
 * @return Le numéro de la personne pointée .
 */
const Sexe& sexe_personne(const PtrPersonne& p);

/**
 * @brief Renvoie le numéro d'une personne.
 *
 * Renvoie le numéro de la personne pointée .
 *
 * @param p  la personne dont on veut le numéro.
 * @return Le numéro de la personne pointée .
 */
const unsigned long& numero_personne(const PtrPersonne& p);

/**
 * @brief Teste les fonctions de la classe Personne.
 *
 * Crée une personne, l'initialise, l'affiche et la détruit.
 */
void Test_Fonction();
