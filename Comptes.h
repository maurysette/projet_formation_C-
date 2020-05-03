/*
 * Compte.h
 *
 *  Created on: 23 janv. 2020
 *      Author: stag
 */

#ifndef COMPTES_H_
#define COMPTES_H_

#include <iostream>
using namespace std;
#include <iomanip>
#include <vector>
#include "Date.h"
//#include "Titulaire.h"

class Comptes {

private:


protected:
	double solde;
	int id;
	string operation;

public:
	Comptes();
	Comptes(int id, double solde, string operation);
	Comptes(const Comptes &Acopier);
	virtual ~Comptes();
	friend ostream & operator << (ostream & out, Comptes &C);
	friend istream & operator >> (istream & it, Comptes &C);
	virtual void deposerArgent() = 0;
	virtual void retirerArgent() = 0;

	virtual void ConsulterCompte() = 0;
	virtual void CloturerCompte() = 0;


};


#endif /* COMPTES_H_ */


