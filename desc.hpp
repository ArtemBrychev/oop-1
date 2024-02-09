#ifndef Description_H
#define Description_H

class Rectangle {
public:
	Rectangle() = default;
	Rectangle(double x, double y);
	double perimeter();
	double area();
private:
	double a{ 1.0 };
	double b{ 1.0 };
};

#endif