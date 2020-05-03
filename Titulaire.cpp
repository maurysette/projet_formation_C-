/*
 * Titulaire.cpp
 *
 *  Created on: 23 janv. 2020
 *      Author: stag
 */


#include "Titulaire.h"
#include <string.h>
#include "Banque.h"


Titulaire::Titulaire(){
	this -> nom = "?";
	this -> prenom = "?";
	this -> adresse ="?";
	this -> email = "?";
	this -> telephone ="?";
}

Titulaire::Titulaire(string nom, string prenom, string adresse, string email, string telephone)
{
	this -> nom = nom;
	this -> prenom = prenom;
	this -> adresse = adresse;
	this -> email = email;
	this -> telephone = telephone;
	}
Titulaire::~Titulaire() {
	// TODO Auto-generated destructor stub
}

void Titulaire ::  modifier()
{


}

ostream & operator << (ostream & out, Titulaire &T)
{

	out << T.nom << endl << T.prenom << endl << T.adresse << endl << T.email << endl
	<< T.telephone << endl;


	return out;
}

istream & operator >> (istream & in, Titulaire &T)
{

	cout << "Nom : ";
	getline(in,T.nom);
	cout << "Prénom : ";
	getline(in,T.prenom);
	cout << "Adresse : ";
	getline(in,T.adresse);
	cout << "Email : ";
	getline(in,T.email);
	cout << "Numéro de téléphone : ";
	getline(in, T.telephone);


	return in;
}

void Titulaire::ConsulterCompte()
{
	string  choix;

/*
	for (i = 0; i< this->tabComptes.size();i++)

	unsigned int i;

		//cout << "Compte n° " << i << " ID:" <<tabComptes[i]->InfosCompte().idcompte << "- solde : " << tabComptes[i]->InfosCompte().soldecompte<< " €" << endl;
*/
}



void Titulaire::deposerArgent()
{
	double argent;
	cout << "Veuillez saisir le montant que vous voulez ajouter à votre compte : ";
	cin >> argent;
	//this->solde = this->solde + argent;


	//return *this;
}



void Titulaire::retirerArgent()
{
	double argent;
	cout << "Veuillez saisir le montant que vous voulez retirer à votre compte : ";
	cin >> argent;
	//this->solde = this->solde - argent;
}



int Titulaire::listedesComptes()
{
	unsigned int i;

		for (i = 0; i< tabComptes.size();i++)
		{
			cout << "valeur de i : " << i << " ,solde :" << *(tabComptes)[i] << endl;
		}
		return i;
}

void Titulaire :: CloturerCompte()
{
	//parcours le vecteur et supprime
	 for( it = tabComptes.begin();it != tabComptes.end(); it++)
	    {
		 	 tabComptes.pop_back();
	    }
}

Titulaire& Titulaire :: operator = (const Titulaire &T)
{
	nom = T.nom;
	prenom = T.prenom;
	adresse = T.adresse;
	email = T.email;
	telephone = T.telephone;

	return *this;

}

void Titulaire :: rechercherComptes(int id)
{
	cin >> id;
	//rechercherTitulaire();
	unsigned int i =0;
	for ( i = 0; i < tabComptes.size(); i++)
	{
		cout << tabComptes[i];
		//afficher tous les comptes correspondants à l'id saisis
	}
}

