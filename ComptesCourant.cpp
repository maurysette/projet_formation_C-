/*
 * ComptesCourant.cpp
 *
 *  Created on: 24 janv. 2020
 *      Author: stag
 */

#include "ComptesCourant.h"

ComptesCourant::ComptesCourant() {
	somme = 0;
	agios = 0;
}

ComptesCourant::ComptesCourant(double somme, double agios)
{
	this -> somme = somme;
	this -> agios = agios;
	cout << "passage dans le constructeur par paramètre";
}

ComptesCourant::ComptesCourant(const ComptesCourant &Acopier)
{
	this -> somme = Acopier.somme;
	this -> agios = Acopier.agios;
	cout << "passage dans le constructeur par copie";
}

void ComptesCourant::deposerArgent()
{
	cout << "Combien voulez vous ajouter d'argent ? ";
	cin >> somme;
	this -> operation = "dêpot de : ";
	this -> solde = this -> solde + somme;


}

void ComptesCourant::retirerArgent()
{
	cout << "Combien voulez vous retirez ? ";
	cin >> somme;

	this->solde = this->solde-somme;

 if (this -> solde < MIN){
	 cout << "Va travailler gueux !!\n";
	 this->solde = this->solde+somme;
	 retirerArgent();
	 // redirection vers menu
 	 }

 	 this -> operation = "retrait de : ";

}

void ComptesCourant::ConsulterCompte()
{
	//Comptes::Afficher();
	cout << solde << agios;
}

void ComptesCourant :: CloturerCompte()
{

	    //    Titulaire.tabComptes.pop_back();

}

ostream & operator << (ostream & out, ComptesCourant &Cc)
{
	out << "Compte n° : "<< Cc.id << endl;
	out << "Votre solde est de : "<< Cc.solde << endl;

	return out;
}

ComptesCourant& ComptesCourant :: operator = (const ComptesCourant &Cc)
{

	return *this;
}

ComptesCourant::~ComptesCourant() {
	// TODO Auto-generated destructor stub
}

