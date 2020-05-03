/*
 * LivretsEpargne.h
 *
 *  Created on: 24 janv. 2020
 *      Author: stag
 */

#ifndef LIVRETSEPARGNE_H_
#define LIVRETSEPARGNE_H_

#include "Comptes.h"

class LivretsEpargne : public Comptes{

public:
	LivretsEpargne();
	LivretsEpargne(int id, double solde, string operation);
	LivretsEpargne(const LivretsEpargne &Acopier);
	virtual ~LivretsEpargne();
};

#endif /* LIVRETSEPARGNE_H_ */
