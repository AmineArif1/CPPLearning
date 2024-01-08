#include "Rectangle.hpp"
#include <iostream>
using namespace std;

int main(){
	const Rectangle r1(2, 3);
	cout << r1.getWidth() << endl;
	Rectangle r2(4, 5);
	return 0;
}
