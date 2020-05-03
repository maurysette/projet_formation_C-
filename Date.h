/*
 * Date.h
 *
 *  Created on: 23 janv. 2020
 *      Author: stag
 */
#include <iostream>
#include <iomanip>

using namespace std;
#ifndef DATE_H_
#define DATE_H_

class Date {

private:
	int jour;
	int mois;
	int annee;

public:
	Date();
	Date(int jour, int mois, int annee);
	Date(const Date &ACopier);
	Date operator+ (const int& A);
	friend ostream & operator <<(ostream & out, Date &D);
	friend istream & operator >>(istream & in, Date &D);
	virtual ~Date();
};

#endif /* DATE_H_ */
