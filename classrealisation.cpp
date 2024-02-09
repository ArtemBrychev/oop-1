#include "desc.hpp"

Rectangle::Rectangle(double x, double y) {
	a = x;
	b = y;
}
double Rectangle::perimeter() {
	return 2 * (a + b);
}
double Rectangle::area() {
	return a * b;
}