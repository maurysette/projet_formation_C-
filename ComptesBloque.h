/*
 * ComptesBloque.h
 *
 *  Created on: 24 janv. 2020
 *      Author: stag
 */

#ifndef COMPTESBLOQUE_H_
#define COMPTESBLOQUE_H_


#include "Titulaire.h"


class ComptesBloque: public Comptes {

public:
	ComptesBloque();
	ComptesBloque(int id, double solde, string operation);
	ComptesBloque(const ComptesBloque &Acopier);
	virtual ~ComptesBloque();
};

#endif /* COMPTESBLOQUE_H_ */
