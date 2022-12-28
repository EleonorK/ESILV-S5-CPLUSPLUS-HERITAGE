#include <exception>
//#include <stdexcept>
#include "compte.h"

Compte::Compte(int n, float s) : numero {n}, solde {s} {
}

void Compte::ajouter(float m) {
	solde += m;
}

void Compte::retirer(float m) {
	if ((solde - m) < getSeuilMin()) throw std::logic_error("Solde pas suffisant !");
	solde -= m;
}

std::ostream & operator<<(std::ostream & out, const Compte & c) {
	out << "Numero = " << c.numero << " et solde = " << c.solde << std::endl;
	return out;
}
