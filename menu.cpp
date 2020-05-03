/*
 * Menu.cpp
 *
 *  Created on: 23 janv. 2020
 *      Author: stag
 */



#include <iostream>
#include <iomanip>
#include "menu.h"
using namespace std;

//#include "ComptesCourant.h"


void afficher(Banque banque, Titulaire T1)
{
	int choix;
	do {
		cout << endl << "========   MENU   ========" << endl;
		cout << "1-Créer un compte" << endl;
		cout << "2-Consulter un compte" << endl;
		cout << "3-Cloturer un compte" << endl;
		cout << "4-Faire un dépôt" << endl;
		cout << "5-Faire un retrait" << endl;

		cout << endl << "Faites votre choix (1-5), 0 pour sortir : " ;
		cin >> choix;

		switch (choix)
		{
				case 1 :
					banque.rechercherTitulaire();
					break;
				case 2 :
					 //T1.ConsulterCompte();
					 break;
				case 3 :
					 T1.CloturerCompte();
					 break;
				case 4 :
					T1.deposerArgent();
					 break;
				case 5 :
					 T1.retirerArgent();
					 break;
				default:
					 break;
		}
	}
	while (choix!=0);
	cout << endl << "Terminé";
	exit(0);
}














