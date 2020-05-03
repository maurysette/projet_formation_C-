/*
 * ComptesCourant.h
 *
 *  Created on: 24 janv. 2020
 *      Author: stag
 */

#ifndef COMPTESCOURANT_H_
#define COMPTESCOURANT_H_
#include <vector>
#include "Comptes.h"
using namespace std;

class ComptesCourant: public Comptes{

private:
	static const int MIN = -200;
	double somme = 0;
	double agios = 0;

public:
	vector <ComptesCourant*> tabComptesCourant;

	ComptesCourant();
	ComptesCourant(double somme, double agios);
	ComptesCourant(const ComptesCourant &Acopier);
	friend ostream & operator << (ostream & out, ComptesCourant & Cc);
	friend istream & operator >> (istream & in, ComptesCourant & Cc);
	ComptesCourant&  operator = (const ComptesCourant &Cc);
	void deposerArgent();
	void retirerArgent();
	void ConsulterCompte();
	void CloturerCompte();
	virtual ~ComptesCourant();
};

#endif /* COMPTESCOURANT_H_ */
