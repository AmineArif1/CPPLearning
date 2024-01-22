#include "Cercle.hpp"

Cercle::Cercle(): rayon(0){
	std::cout << "je suis un cercle, mon rayon est de " << rayon << std::endl;
}
Cercle::Cercle(double rayon): rayon(rayon){
	std::cout << "je suis un cercle, mon rayon est de " << rayon << std::endl;
}

double Cercle::getRayon(){

	return rayon;

}

void Cercle::setRayon(double Nrayon){
	rayon = Nrayon;
}

void Cercle::afficher(){
	std::cout << "je suis un cercle, mon rayon est de " << rayon << std::endl;

}
void Cercle::action(){
	std::cout << "je suis un cercle, je tourne" << std::endl;
}
