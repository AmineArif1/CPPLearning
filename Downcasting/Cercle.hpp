#include "Forme.hpp"
class Cercle: public Forme{

private:
	double rayon;
public:
	Cercle();
	Cercle(double rayon);
	void setRayon(double);
	double getRayon();
	void afficher();
	void action();
};


