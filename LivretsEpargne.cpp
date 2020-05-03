/*
 * LivretsEpargne.cpp
 *
 *  Created on: 24 janv. 2020
 *      Author: stag
 */
#include "Titulaire.h"
#include "Banque.h"
#include "LivretsEpargne.h"


LivretsEpargne::LivretsEpargne()
{
	id = 1;
	solde = 0;
	operation = "???";

	Date();
}

LivretsEpargne::LivretsEpargne(const LivretsEpargne &Acopier) {
	id = Acopier.id;
	solde = Acopier.solde;
	operation = Acopier.operation;
	Date();
	cout << "passage dans le constructeur par copie";

}

LivretsEpargne::LivretsEpargne(int id, double solde, string operation)
{
	this->id = id;
	this->solde = solde;
	this->operation = operation;
	Date();
	cout << "passage dans le constructeur avec parametres";

}
LivretsEpargne::~LivretsEpargne() {
	// TODO Auto-generated destructor stub
}

