#include <iostream>
#include <math.h>
//#include <Array>
#include <string>
#include <vector>
#include <cstdlib>
//#include "objects.h"
#include "classes.cpp"

//double pi = 3.141592653589793238462;

void mainMenu();
void shapes();
void functions();

/*class Square
{
private:
    double side_lenght;

public:
    Square();
    Square(double side_lenght);
    double area();
    double perimeter();
    double getSide_Lenght();
    void setSide_Lenght(double sdie_lenght);
    ~Square();
};

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
}*/

/*class Rectangle{
private:
    double width;
    double heigth;
public:
    Rectangle();
    //Rectangle(double width);
    //Rectangle(double heigth);
    Rectangle(double width, double heigth);
    double getArea();
    double getPerimeter();
    double getWidth();
    double getHeigth();
    void setWidth(double width);
    void setHeigth(double heigth);
    ~Rectangle();
};*/

/*Rectangle::Rectangle(){
    this->width = 1.0;
    this->heigth = 1.0;
}*/

/*Rectangle::Rectangle(double width){
    this->width = width;
    this->heigth = 1.0;
}*/

/*Rectangle::Rectangle(double heigth){
    this->heigth = heigth;
    this->width = 1.0;
}*/

/*Rectangle::Rectangle(double width, double heigth){
    this->width = width;
    this->heigth = heigth;
}

double Rectangle::getArea(){
    return (this->width * this->heigth);
}
double Rectangle::getPerimeter(){
    return ((2*this->width) + (2*this->heigth));
}
double Rectangle::getWidth(){
    return this->width;
}
double Rectangle::getHeigth(){
    return this->heigth;
}
void Rectangle::setWidth(double width){
    this->width = width;
}
void Rectangle::setHeigth(double heigth){
    this->heigth = heigth;
}*/

int main(){
    mainMenu();
    system("pause");
    return 0;
}

void mainMenu(){
    int option;
    std::cout<<"MAIN MENU"<<std::endl;
    std::cout<<"Welcome to the Calculator. This calculator allows you to carry out calcuilations for different shapes."<<std::endl;
    std::cout<<"Please choose of the following options. If what you want to do is not available at this time, please let us know and we would add it to the list of functions."<<std::endl;
    std::cout<<"1 "<<"Shapes   "<<std::endl;
    std::cout<<"2 "<<"Functions"<<std::endl;
    std::cin>>option;
    switch (option)
    {
    case 1:
        shapes();
        break;
    case 2:
        functions();
    default:
        std::cout<<"Sorry, yo u have entered an INVALID option. Please try again"<<std::endl;
        mainMenu();
        break;
    }
}

void shapes(){

}

void functions(){

}