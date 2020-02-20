#pragma once

double pi = 3.14159265359;

class Square {
private:
	double lenght;
public:
	Square();
	Square(double lenght);
	double getLenght();
	void setLenght(double value);
	double areaOfSquare();
	double perimeterOfSquare();
};

class Rectangle {
private:
	double lenght;
	double width;
public:
	Rectangle();
	Rectangle(double lenght, double width);
	double getLenght();
	double getWidth();
	void setLenght(double value);
	void setWidth(double value);
	double areaOfRectangle();
	double perimeterOfRectangle();
};

class Cone {

};

class Pyramid {

};

class Circle {

};

class Triangle {

};