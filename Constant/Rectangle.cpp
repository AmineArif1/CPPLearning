#include "Rectangle.hpp"
#include <iostream>
using namespace std;

Rectangle::Rectangle(double h, double w): height(h), width(w) {
    cout << "Rectangle constructor called." << endl;
}
void Rectangle::setHeight(double h) {
    height = h;
}
void Rectangle::setWidth(double w) {
    width = w;
}
double Rectangle::getHeight() const {
    return height;
}
double Rectangle::getWidth() const {
    return width;
}

