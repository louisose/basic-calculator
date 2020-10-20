#include "objects.h"
//#include <math.h>

Square::Square(){
    this->side_lenght = 1.0;
}

Square::Square(double side_lenght){
    this->side_lenght = side_lenght;
}

void Square::setSide_Lenght(double side_lenght){
    this->side_lenght = side_lenght;
}

double Square::area(){
    return pow(this->side_lenght, 2);
}

double Square::perimeter(){
    return (4 * this->side_lenght);
}

double Square::getSide_Lenght(){
    return this->side_lenght;
}

Rectangle::Rectangle()
{
    this->width = 1.0;
    this->heigth = 1.0;
}

/*Rectangle::Rectangle(double width){
    this->width = width;
    this->heigth = 1.0;
}*/

/*Rectangle::Rectangle(double heigth){
    this->heigth = heigth;
    this->width = 1.0;
}*/

Rectangle::Rectangle(double width, double heigth)
{
    this->width = width;
    this->heigth = heigth;
}

double Rectangle::getArea()
{
    return (this->width * this->heigth);
}
double Rectangle::getPerimeter()
{
    return ((2 * this->width) + (2 * this->heigth));
}
double Rectangle::getWidth()
{
    return this->width;
}
double Rectangle::getHeigth()
{
    return this->heigth;
}
void Rectangle::setWidth(double width)
{
    this->width = width;
}
void Rectangle::setHeigth(double heigth)
{
    this->heigth = heigth;
}