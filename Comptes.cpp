/*
 * Compte.cpp
 *
 *  Created on: 23 janv. 2020
 *      Author: stag
 */
#include "Comptes.h"


Comptes::Comptes()
{
	id = 1;
	solde = 0;
	operation = "???";

	Date();
}

Comptes::Comptes(int id, double solde, string operation)
{
	this->id = id;
	this->solde = solde;
	this->operation = operation;
	Date();
	cout << "passage dans le constructeur avec parametres";
}


Comptes::Comptes(const Comptes &Acopier)
{
	id = Acopier.id;
	solde = Acopier.solde;
	operation = Acopier.operation;
	Date();
	cout << "passage dans le constructeur par copie";
}


ostream & operator << (ostream & out, Comptes &C)
{
	out << C.id << endl << C.solde << endl;
	out << C.operation << endl;
	return out;

}


Comptes::~Comptes() {}

