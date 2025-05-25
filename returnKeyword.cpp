#include <iostream>

double square (double length);
double cube(double length);

int main(){
    //return - returrn a value back to the spot where you called the encopassing function

    double lenght = 5.0;
    double area  = square(lenght);
    double volume = cube(lenght);

    std:: cout << "Area: " << area << "cm^2\n";
    std:: cout << "Volume: " << volume << "cm^3\n";


    return 0;
}

double square(double length){
    return length * length;
}

double cube(double length){
    return length * length * length;
}