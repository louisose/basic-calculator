#include <iostream>
#include <cstdlib>
#include <math.h>

void mainmenu();
void squares();
void rectangles();
void circles();
void cones();
void pyramid();
double pi = 3.14159265359;


int main()
{
    system("cls");
    std::cout<< "Hello And Welcome To The Basic Calculator."<<std::endl;
    std::cout<<"It Can Be Used For Simple Calculations."<<std::endl;
    std::cout<<"So Without Further Talk, Let et Started."<<std::endl;
    system("Pause");
    mainmenu();
    system("cls");
    std::cout<<"Thank You And I Hope I Was Helpful.\n";
    std::cout<<"And Until Next Time. See You."<<std::endl;
    system("Pause");
    return 0;
}

void mainmenu()
{
    system("cls");
    std::cout<<"*****MAIN MENU*****"<<std::endl;
    std::cout<<"What Would You Love To  Work On Today?"<<std::endl;
    std::cout<<"Please Choose An Option"<<std::endl;
    std::cout<<"1   Squares     "<<std::endl;
    std::cout<<"2   Rectangles  "<<std::endl;
    std::cout<<"3   Circles     "<<std::endl;
    std::cout<<"4   Cones       "<<std::endl;
    std::cout<<"5   Pyramids    "<<std::endl;
    int option;
    std::cin>>option;
    system("Pause");

     switch (option)
    {
      case 1: squares();
                break;
      case 2: rectangles();
                break;
      case 3: circles();
                break;
      case 4: cones();
                break;
      case 5: pyramid();
                break;
      case 6: main();
                break;

      default: std::cout<<"ERROR!!! YOU PICKED AN INVALID OPTION. TRY AGAIN"<<std::endl;
    }
    system("pause");
}

int areaofsquare();
int perimeterofsquare();
int areaofrectangle();
int perimeterofrectangle();

void squares()
{
    system("cls");
    std::cout<<"Hello And Welcome."<<std::endl;
	std::cout<<"What Would You Love To Find"<<std::endl;
	std::cout<<"1	The Area Of A Square			 "<<std::endl;
	std::cout<<"2	The Perimeter Of A Square "<<std::endl;
    system("Pause");
	int choice;
	std::cin>>choice;
	switch(choice)
	{
		case 1:	areaofsquare();
									break;
		case 2:   perimeterofsquare();
									break;
		default: std::cout<<"ERROR!"<<std::endl;
									break;
	}
	system("Pause");
}
int areaofsquare()
{
	double x;
	std::cout<<"Please Enter The Lenght Of One Side"<<std::endl;
	std::cin>>x;
    std::cout<<"The Length Of The Side Is"<<x<<" Units."<<std::endl;
	std::cout<<"The Area Of The Square is"<<x*x<<"units squared"<<std::endl;
	system("Pause");
	return 0;
}
int perimeterofsquare()
{
	double x;
	std::cout<<"Please Enter The Lenght Of One Side"<<std::endl;
	std::cin>>x;
    std::cout<<"The Length Of The Side Is"<<x<<" Units."<<std::endl;
	std::cout<<"The Perimeter Of The Square is"<<x+x+x+x<<"units"<<std::endl;
	system("Pause");
	return 0;
}
void rectangles()
{
    system("cls");
    std::cout<<"Hello And Welcome."<<std::endl;
	std::cout<<"What Would You Love To Find"<<std::endl;
	std::cout<<"1	The Area Of A Rectangle			  "<<std::endl;
	std::cout<<"2	The Perimeter Of A Rectangle "<<std::endl;
    system("Pause");
	int choice;
	std::cin>>choice;
	switch(choice)
	{
		case 1:	areaofrectangle();
									break;
		case 2:  perimeterofrectangle();
									break;
		default: std::cout<<"ERROR!"<<std::endl;
									break;
	}
    system("Pause");
}
int areaofrectangle()
{
     system("cls");
     double x;
     double y;
     std::cout<<"Hello And Welcome."<<std::endl;
     std::cout<<"Please Enter the Length of the Rectangle"<<std::endl;
     std::cin>>x;
     std::cout<<"The length Of The Rectangle Is "<<x<<" Units."<<std::endl;
     std::cout<<"Please Enter the Width of the Rectangle"<<std::endl;
     std::cin>>y;
     std::cout<<"The Widdth Of The Rectangle Is "<<y<<" Units."<<std::endl;
     std::cout<<"The Area Of The Rectangle Is "<< x*y<<" Units "<<std::endl;
    system("Pause");
    return 0;
}
int perimeterofrectangle()
{
    system("cls");
     double x;
     double y;
     std::cout<<"Hello And Welcome."<<std::endl;
     std::cout<<"Please Enter the Length of the Rectangle"<<std::endl;
     std::cin>>x;
     std::cout<<"The length Of The Rectangle Is "<<x<<" Units."<<std::endl;
     std::cout<<"Please Enter the Width of the Rectangle"<<std::endl;
     std::cin>>y;
     std::cout<<"The Width Of The Rectangle Is "<<y<<" Units."<<std::endl;
     std::cout<<"The Perimeter Of The Rectangle Is "<< 2*(x+y) <<" Units "<<std::endl;
    system("Pause");
    return 0;
}
int areaofcircles();
int circumferenceofcircles();

void circles()
{
    system("cls");
    std::cout<<"Hello And Welcome."<<std::endl;
    std::cout<<"What Would You Love To Find"<<std::endl;
    std::cout<<"1   The Area Of A Circle           "<<std::endl;
    std::cout<<"2   The Circumference Of A Circle  "<<std::endl;
    system("Pause");
    int choice;
    std::cin>>choice;
    switch(choice)
    {
        case 1: areaofcircles();
                                    break;
        case 2:  circumferenceofcircles();
                                    break;
        default: std::cout<<"ERROR!"<<std::endl;
                                    break;
    }
    system("Pause");
}
int areaofcircles()
{
    system("cls");
    double r;
    std::cout<<"Hello And Welcome."<<std::endl;
    std::cout<<"Please Enter The Raduis of The Circle."<<std::endl;
    std::cin>> r;
    std::cout<<"The Raduis Of The Circle Is: "<<r<<" Units."<<std::endl;
    std::cout<<"The Area Of The Circle Is "<< (r*r)*pi <<" unists squared."<<std::endl;

    system("pause");
    return 0;
}
int circumferenceofcircles()
{
    system("cls");
    double r;
    std::cout<<"Hello And Welcome"<<std::endl;
    std::cout<<"Please Enter The Raduis of The Circle."<<std::endl;
    std::cin>> r;
    std::cout<<"The Raduis Of The Circle Is: "<<r<<" Units."<<std::endl;
    std::cout<<"And The Diameter Of The Circle Is: "<<2*r<<" Units."<<std::endl;
    std::cout<<"The Circumference Of The Circle is "<< 2*r*pi<<" Units"<<std::endl;
    system("pause");
    return 0;
}
void cones()
{
    system("cls");
     std::cout<<"Hello And Welcome."<<std::endl;
    system("Pause");
}
void pyramid()
{
    system("cls");
     std::cout<<"Hello And Welcome."<<std::endl;
    system("Pause");
}
