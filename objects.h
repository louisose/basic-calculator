#include <math.h>

double pi = 3.141592653589793238462;

class Square
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

class Rectangle
{
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
};