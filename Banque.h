/*
 * Banque.h
 *
 *  Created on: 23 janv. 2020
 *      Author: stag
 */

using namespace std;

#ifndef BANQUE_H_
#define BANQUE_H_

#include "Titulaire.h"
using namespace std;
#include <vector>
#include <iostream>
#include <iomanip>


class Banque {
public:
	vector<Titulaire> tabTitulaire;
	std::vector <Titulaire>:: iterator it;

	Banque();
	~Banque();
	void rechercherTitulaire ();
	void CreerCompte(Titulaire &T1);
	void CloturerCompte(Titulaire T1);


};

#endif /* BANQUE_H_ */
