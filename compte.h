#ifndef COMPTE_H
#define COMPTE_H

#include <iostream>

class Compte {
	protected :
		int numero;
		float solde;
	public :
		Compte(int n, float s);
		virtual float getSeuilMin() const=0;
		void ajouter(float montant);
		void retirer(float montant);
		friend std::ostream & operator<<(std::ostream & out, const Compte & c);
};
#endif
