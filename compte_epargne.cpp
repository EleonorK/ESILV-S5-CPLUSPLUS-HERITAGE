#include "compte_epargne.h"

CompteEpargne::CompteEpargne(int n, float s, float t) : Compte(n,s), tauxAnnuel {t} {
	if (s < SEUIL_MIN) throw std::logic_error("Solde inférieur à seuil min !");
}
 
float CompteEpargne::calculerInteretAnnuel() const {
	return tauxAnnuel*solde;
}

std::ostream & operator<<(std::ostream & out, const CompteEpargne & c) {
	out << "Compte epargne " <<  static_cast<const Compte &>(c) // appeler << de la classe mère
	<< " taux  = " << c.tauxAnnuel << std::endl;
	return out;
}
