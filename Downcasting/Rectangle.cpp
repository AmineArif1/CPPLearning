#include "Rectangle.hpp"
#include <iostream>
using namespace std;

Rectangle::Rectangle(double l, double h): longueur(l), hauteur(h) {
    
    cout << "Rectangle créé" << endl;
}
Rectangle::~Rectangle() {
    cout << "Rectangle détruit" << endl;
}
double Rectangle::surface() const {
    return longueur * hauteur;
}
double Rectangle::perimetre() const {
    return 2 * (longueur + hauteur);
}
void Rectangle::afficher() const {
    cout << "Rectangle de longueur " << longueur << " et de hauteur " << hauteur << endl;
}
void Rectangle::setLongueur(double l) {
    longueur = l;
}
void Rectangle::setHauteur(double h) {
    hauteur = h;
}
double Rectangle::getLongueur() const {
    return longueur;
}
double Rectangle::getHauteur() const {
    return hauteur;
}
void Rectangle::action(){
	cout << "Rectangle attack" << endl;



}
