/*
 * Date.cpp
 *
 *  Created on: 23 janv. 2020
 *      Author: stag
 */

#include "Date.h"

Date::Date() {
	jour = 1;
	mois = 1;
	annee = 2020;

}

Date::Date( int j, int m, int an)
{
   this-> jour = j;
   this-> mois = m;
   this-> annee = an;
   cout << "passage dans le constructeur avec parametre" << endl;
}

Date::Date(const Date &ACopier)
{
	  jour=ACopier.jour;
	  mois=ACopier.mois;
	  annee=ACopier.annee;
}

Date Date::operator+ (const int& A)
{
    Date d_res = *this;
    d_res.annee = d_res.annee + A;
    return d_res;
}

ostream & operator <<(ostream & out, Date &D){
	out << setw(2) << setfill('0') <<D.jour << "/"<<endl << setw(2) << setfill('0')<< D.mois << "/"<< endl << setw(2) << setfill('0')<<
			D.annee<< endl;

	return out;
}

istream & operator >>(istream & in, Date &D){
	cout << "Saisissez la date"<< endl;
	cout << "Le jour : "<< endl;
	in >> D.jour;
	cout << "Le mois : "<< endl;
	in >> D.mois;
	cout << "L'année : "<< endl;
	in >> D.annee;

	return in;
}

Date::~Date() {
	// TODO Auto-generated destructor stub
}

