#pragma once
#include <math.h>

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

class Circle{
private:
	double radius;
	double diameter;
public:
	Circle();
	Circle(double radius);
	Circle(double diameter);
	double getRadius();
	double getDiameter();
	void setRadius(double radius);
	void setDiameter(double diameter);
	double areaOfCircle();
	double circimfrenceOfCircle();
};

class Triangle {
private:
	double base;
	double height;
public:
	Triangle();
	Triangle(double base);
	Triangle(double height);
	Triangle(double base, double height);
	double getBase();
	double getHeight();
	void setBase(double base);
	void setHeight(double height);
	double areaOfTriangle();
	double perimeterOfTriangle();
};

class Cone {
private:
	double radius;
	double height;
	//double slantheight;
public:
	Cone();
	Cone(double radius);
	Cone(double height);
	Cone(double radius, double height);
	double getRadius();
	double getHeight();
	double getSlantHeight();
	void setRadius(double radius);
	void setHeight(double height);
	double getSurfaceArea();
	double getVolume();
};

class Pyramid {

};

