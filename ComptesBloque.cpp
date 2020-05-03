/*
 * ComptesBloque.cpp
 *
 *  Created on: 24 janv. 2020
 *      Author: stag
 */

#include "ComptesBloque.h"



ComptesBloque::ComptesBloque()
{
	id = 1;
	solde = 0;
	operation = "???";

	Date();
}
ComptesBloque::ComptesBloque(int id, double solde, string operation)
{
	this->id = id;
	this->solde = solde;
	this->operation = operation;
	Date();
	cout << "passage dans le constructeur avec parametres";
}


ComptesBloque::ComptesBloque(const ComptesBloque &Acopier) {

	id = Acopier.id;
	solde = Acopier.solde;
	operation = Acopier.operation;
	Date();
	cout << "passage dans le constructeur par copie";

}

ComptesBloque::~ComptesBloque() {
	// TODO Auto-generated destructor stub
}

