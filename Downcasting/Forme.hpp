#include <iostream>
#ifndef Forme_H
#define Forme_H
#include "Point.hpp"
class Forme: public Point{

private:
	std::string couleur;
	Point point;
public:
	Forme();
	Forme(std::string);
	void setCouleur(std::string);
	std::string getCouleur();
	virtual void afficher();
	virtual void action() = 0;




};
#endif
