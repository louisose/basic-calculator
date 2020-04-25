#pragma once
# include <Classes.h>

// Square Functions
Square::Square() {
	this->lenght = 1.0;
}

Square::Square(double lenght) {
	this->lenght = lenght;
}

double Square::getLenght(){
	return this->lenght;
}

void Square::setLenght(double value) {
	this->lenght = value;
}

double Square::areaOfSquare() {
	return (this->lenght ^ 2);
}

double Square::perimeterOfSquare() {
	return (4 * this->lenght);
}

// Rectangle Functions

Rectangle::Rectangle() {
	this->lenght = 1.0;
	this->width = 1.0;
}

Rectangle::Rectangle(double lenght, double width) {
	this->lenght = lenght;
	this->width = width;
}

double Rectangle::getLenght()
{
	return this->lenght;
}

double Rectangle::getWidth()
{
	return this->width;
}

void Rectangle::setLenght(double value)
{
	this->lenght = value;
}

void Rectangle::setWidth(double value)
{
	this->width = value;
}

double Rectangle::areaOfRectangle()
{
	return (this->lenght * this->width);
}

double Rectangle::perimeterOfRectangle()
{
	return ((2 * this->lenght) + (2 * this->width));
}


Circle::Circle() {
	this->radius = 1.0;
	this->diameter = this->radius * 2;
}

 Circle::Circle(double radius) {
	this->radius = radius;
	this->diameter = this->radius * 2;
}

Circle::Circle(double diameter) {
	this->diameter = diameter;
	this->radius = this->diameter / 2;
}

double Circle::getRadius() {
	return this->radius;
}

void Circle::setRadius(double radius) {
	this->radius = radius;
}

double Circle::getDiameter() {
	return this->diameter;
}

void Circle::setDiameter(double diameter) {
	this->diameter = diameter;
}

double Circle::areaOfCircle() {
	return (pi * (pow(this->radius, 2)));
}

double Circle::circimfrenceOfCircle() {
	return (pi * this->diameter);
}

Triangle::Triangle() {
	this->base = 1.0;
	this->height = 1.0;
}

Triangle::Triangle(double base) {
	this->base = base;
	this->height = 1.0;
}

Triangle::Triangle(double height) {
	this->height = height;
	this->base = 1.0;
}

Triangle::Triangle(double base, double height) {
	this->base = base;
	this->height = height;
}

double Triangle::getBase() {
	return this->base;
}

double Triangle::getHeight() {
	return this->height;
}

void Triangle::setBase(double base) {
	this->base = base;
}

void Triangle::setHeight(double height) {
	this->height = height;
}

double Triangle::areaOfTriangle() {
	return (this->base * this->height) * 0.5;
}

double Triangle::perimeterOfTriangle() {

}