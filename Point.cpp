#include "Point.hpp"
#include <iostream>

int Point::compteur = 0;


Point::Point():Point(0,0){
}

Point::Point(double x, double y):x(x),y(y){
	compteur++;
}
double Point::getX(){
	return x;
}
double Point::getY(){
	return y;
}
void Point::setX(double x){
	this->x = x;
}
void Point::setY(double y){
	this->y = y;
}
int Point::getCompteur(){
	return compteur;
}
