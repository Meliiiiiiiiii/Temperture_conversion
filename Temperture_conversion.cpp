#include<iostream>
#include <cmath>

int main(){

char unit;
double temp;

std:: cout << " ******************** Temperature Conversion ****************** \n";

std:: cout << "F = Fahrenheit \n";
std:: cout << "C = Celesius \n";
std:: cout << "Please enter what unit you like to convert to: ";
std:: cin >> unit;

if( unit == 'F' || unit == 'f'){

    std:: cout << "Please enter the temperture in Celsius: ";
    std:: cin >> temp;

    temp = (1.8 * temp)+ 32.0;
    std:: cout << "The temperture is: " << temp <<" F \n";


}

else if( unit == 'C' || unit == 'c'){

    std:: cout << "Please enter the temperture in Fahrenheit: ";
    std:: cin >> temp;

    temp = (temp -32.0)/1.8;
    std:: cout << "The temperture is: " << temp <<" C \n";


}

else{

    std:: cout <<"Please only enter F or C. \n";
}



std:: cout << " *******************************************************************";








    return 0;


}