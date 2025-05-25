#include <iostream>

int main(){
    // array - a data structure that can hold multiple values
    //         values are accessed by aan index number
    //         "kind of like a variable that holds multiple value"

    /*
    1-st version with strings

    std:: string cars[] = {"Corvette", "Lotus", "M335"} ;

    cars[2] = "Evoque";
    */

   /*
    std::string cars[3];

    2-nd version with adding every separate time
    cars[0] = "Lexus LFA";
    cars[1] = "Toyota Supra";
    cars[2] = "Koenigseg";

    std:: cout << cars[0] << '\n';
    std:: cout << cars[1] << '\n';
    std:: cout << cars[2] << '\n';

    return 0;
    */
    // 3-d version - using a double variables
    double price [] = {11.1, 1.2, 44.6, 77.3};

    std:: cout << price[0] << '\n';
    std:: cout << price[1] << '\n';
    std:: cout << price[2] << '\n';
    std:: cout << price[3] << '\n';
}