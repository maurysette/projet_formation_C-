/*
 * Titulaire.h
 *
 *  Created on: 23 janv. 2020
 *      Author: stag
 */



using namespace std;


#ifndef TITULAIRE_H_
#define TITULAIRE_H_

#include <vector>
#include <iostream>
#include <iomanip>
#include "Comptes.h"
using namespace std;


class Titulaire {

private:

	string adresse;
	string email;
	string telephone;

protected:


public:
	string nom;
	string prenom;
	vector <Comptes*> tabComptes;
	std::vector <Comptes*>:: iterator it;

	Titulaire();
	Titulaire(string nom, string prenom, string adresse, string email, string telephone);
	~Titulaire();
	friend ostream & operator << (ostream & out, Titulaire &T);
	friend istream & operator >> (istream & in, Titulaire &T);
	Titulaire& operator = (const Titulaire &T);
	void modifier();
	int listedesComptes();//retourne le nb de comptes
	void ConsulterCompte();
	void deposerArgent();
	void retirerArgent();
	void CloturerCompte();
	void rechercherComptes(int id);

};

#endif /* TITULAIRE_H_ */
