/*
 * Tests.cpp
 *
 *  Created on: 24 janv. 2020
 *      Author: stag
 */

#include "Tests.h"


void fonctionTest()
{
	Banque banque;
	Titulaire T1;
	Titulaire T2("maury", "Alixia", "toulouse", "alixia@gmail.com", "0563528752");
	Titulaire T3("hoyez", "William", "vales", "will@gmail.com", "0563528753");
	Titulaire T4("pastor", "Guillaume", "toulouse", "guillaume@gmail.com", "0563528754");


	//saisie d'un titulaire
	cout << "Saississez le premier titulaire : \n";
	cin >> T1;

	//creation de 5 comptes courants
	ComptesCourant Cc, Cc2, Cc3, Cc4, Cc5;


	banque.tabTitulaire.push_back(T1);
	// affichage des titulaires
	for (unsigned int i =0;i< banque.tabTitulaire.size();i++){ cout << banque.tabTitulaire[i];}


	T1.tabComptes.push_back(&Cc);
	T1.tabComptes.push_back(&Cc2);

	T2.tabComptes.push_back(&Cc3);
	T3.tabComptes.push_back(&Cc4);
	//T1.tabComptes.push_back(&Cc5);

	//affiche l'adresse du compte
	//cout << T1.tabComptes[0];

	// fonction pour deposer et retirer de l'argent
	Cc.deposerArgent();
	Cc.retirerArgent();

	Cc2.deposerArgent();
	Cc2.retirerArgent();

	Cc3.deposerArgent();
	Cc3.retirerArgent();

	Cc4.deposerArgent();
	Cc4.retirerArgent();

	Cc5.deposerArgent();
	Cc5.retirerArgent();

	//permet d'afficher la valeur des elements du compte et non l'adresse en utilisant un pointeur
	for(unsigned int i =0; i<T1.tabComptes.size();i++)
		{cout << *(T1.tabComptes)[i];
		}

	cout << Cc;
	cout << Cc2;
	cout << Cc3;
	cout << Cc4;
	cout << Cc5;
	//banque.rechercherTitulaire();

	/* autre facon de saisir
	cin >> banque.tabTitulaire[0];*/


	//vider le tableau de comptes du titulaire T1
	T1.tabComptes.pop_back();



	//menu.afficher(banque, T1);


	delete(&T1);
	delete(&T2);
	delete(&T3);
	delete(&T4);
	delete(&Cc);
	delete(&Cc2);
	delete(&Cc3);
	delete(&Cc4);
}



