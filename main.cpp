#include <iostream>
#include "desc.hpp"

int main() {
	Rectangle rectangle1(4.0, 6.0);
	std::cout << rectangle1.perimeter() << ' ' << rectangle1.area() << std::endl;
	Rectangle rectangle2;
	std::cout << rectangle2.perimeter() << ' ' << rectangle2.area() << std::endl;
}