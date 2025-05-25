#include <iostream>

int main(){

    double temp;
    char unit;

    std:: cout << "********* TEMPERATURE CONVERSION ********\n";

    std:: cout << " F - Faranheit \n";
    std:: cout << " C - Celsium \n";
    std:: cout << "What unit would like you to convert? ";

    std:: cin>> unit;

    if(unit == 'F' || unit == 'f'){
        std:: cout << "Enter the temperature in Celsius: ";
        std:: cin>> temp;

        temp = (1.8 * temp) + 32.0;
        std:: cout << "Temperature is "<< temp << "F\n";
    }
    else if (unit == 'C' || unit == 'c')
    {
        std:: cout << "Enter the temperature in Faranheit: ";
        std:: cin>> temp;

        temp = (temp -32)/1.8;
        std:: cout << "Temperature is "<< temp << "C\n";
    }
    else{
        std:: cout << "Please enter only one leter C or  F \n";
    }
    
    std:: cout << "*****************************************\n";
    return 0;
}