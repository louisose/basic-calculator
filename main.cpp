#include <iostream>
#include <cstdlib>

void mainmenu();
void squares();
void rectangles();
void circles();
void cones();
void pyramid();


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
	int x;
	std::cout<<"Please Enter The Lenght Of One Side"<<std::endl;
	std::cin>>x;
	std::cout<<"The Area Of The Square is"<<x*x<<"units squared"<<std::endl;
	system("Pause");
	return 0;
}
int perimeterofsquare()
{
	int x;
	std::cout<<"Please Enter The Lenght Of One Side"<<std::endl;
	std::cin>>x;
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
		case 1:	areaofsquare();
									break;
		case 2:   perimeterofsquare();
									break;
		default: std::cout<<"ERROR!"<<std::endl;
									break;
	}
    system("Pause");
}
void circles()
{
    system("cls");
     std::cout<<"Hello And Welcome."<<std::endl;
    system("Pause");
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
