/*
 * Banque.cpp
 *
 *  Created on: 23 janv. 2020
 *      Author: stag
 */

#include "Banque.h"
#include <iostream>

Banque::Banque()/* : tabTitulaire(25)*/ {
	// fonction de log in

}

Banque::~Banque() {
	// TODO Auto-generated destructor stub
}

void Banque :: rechercherTitulaire ()
{
	Titulaire T;
	cin >> T;

	unsigned int i = 0;

	for (i =0; i < tabTitulaire.size(); i ++)
	{
		if (T.nom == tabTitulaire[i].nom && T.prenom == tabTitulaire[i].prenom)
		{
			cout << "Cette personne existe déja" << endl;
		}else{tabTitulaire.push_back(T);}
	}
}
/*

void Banque::CreerCompte(Titulaire &T1)
{
	int somme;

	cout << "Entrer la somme de départ :";
	cin >> somme;
	if (somme>0)
	{
		Comptes C(T1 , somme);
		T1.tabComptes.push_back(&C);
	}
	else
	{
		cout << endl << "la somme saisie n'est pas valide.";
	}
}
*/

