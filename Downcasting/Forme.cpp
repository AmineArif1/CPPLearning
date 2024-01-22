#include "Forme.hpp"
#include "Point.hpp"
Forme::Forme(){
std::cout << "constructeur par defaut de forme" << std::endl;
}

Forme::Forme(std::string color): couleur(color){

}

std::string Forme::getCouleur(){
	return couleur;
}

void Forme::setCouleur(std::string color){

	couleur = color;
}
void Forme::afficher(){
	
	std::cout << "je suis une forme";

}
