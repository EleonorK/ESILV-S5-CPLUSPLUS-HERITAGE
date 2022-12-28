#ifndef COMPTE_EPARGNE_H
#define COMPTE_EPARGNE_H

#include <iostream>
#include "compte.h"

class CompteEpargne : public Compte {

	private :
		static constexpr float SEUIL_MIN = 5;
		float tauxAnnuel;
	public :
		CompteEpargne(int n, float s, float t);
		float calculerInteretAnnuel() const;
		float getSeuilMin() const override {return SEUIL_MIN;}
		friend std::ostream & operator<<(std::ostream & out, const CompteEpargne & c);
};
#endif
