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