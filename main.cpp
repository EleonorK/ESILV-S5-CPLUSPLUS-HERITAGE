#include "shape.h"
#include "rectangle.h"
#include "circle.h"

#include "compte.h"
#include "compte_courant.h"

using namespace std;

#include "compte_epargne.h"
#include "compte_courant.h"

using namespace std;

int main(int argc, char ** argv) {

	/*Compte c(1, 200);
	std::cout <<c.getSeuilMin();*/
   /* std::cout << "création d'un compte epargne" << std::endl;
	try{
		CompteEpargne ce1(2, 1, 0.2);
		std::cout << ce1;
	    }
	catch (std::logic_error& e) {
			cerr << e.what() << std::endl;
		}
	
	std::cout << "FIN" << std::endl;
	*/

	try {	
		CompteEpargne ce(1, 300, 0.5);
		CompteCourant cc(2, 600);
		cout << ce;
		cout << cc;
		cc.ajouter(200);
		cout << cc;
		try {	
			ce.retirer(1800);
			cout << ce;
			return 0;
		}
		catch (std::logic_error& e) {
			cerr << e.what() << std::endl;
		}
	}
	catch (std::logic_error& e) {
		cerr << e.what() << std::endl;
	}
	
}



int main() {
    Shape s(3,5,7);
    Rectangle r(6,9,5,7,8);
    //Circle c(3,4,5,6);
    std::cout << s;
    std::cout << r;
   // std::cout << c;
    return 0;
}
