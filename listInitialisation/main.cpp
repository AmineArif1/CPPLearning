#include "Point.hpp"
#include <iostream>
#include <sstream>
int main()
{
    const Point p1(1, 2);
    Point p2{};
    Point* p3 = new Point(1.5, 2.5);
    std::cout << p3->getX() << std::endl;
    std::cout << "total number of instance is " << Point::getCompteur();
    delete p3;
    std::ostringstream oss;
    oss << p1.getX() << " " << p1.getY();
    
    return 0;
}

