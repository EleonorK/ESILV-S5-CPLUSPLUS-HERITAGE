#ifndef COMPTE_COURANT_H
#define COMPTE_COURANT_H

#include <iostream>
#include "compte.h"

class CompteCourant : public Compte {
	private :
		static constexpr float SEUIL_MIN = 500;
	public :
		CompteCourant(int n, float s) : Compte(n,s) { 
			if (s < SEUIL_MIN) throw std::logic_error("Solde inférieur à seuil min !");
		}
		float getSeuilMin() const override {return SEUIL_MIN;}
	friend std::ostream & operator<<(std::ostream & out, const CompteCourant & c) {
		out << "Compte courant " <<  static_cast<const Compte &>(c) << std::endl;
		return out;
	}
};
#endif
