#include <iostream>

int main(){

    //do while loop - do some block of code first, 
    //                and repeat again if condition is true

    int number;

    do{
        std:: cout << "Enter a positive number ";
        std:: cin>> number;
    }
    while(number<0);
    std:: cout << "The # is: "<< number;
    return 0;

}