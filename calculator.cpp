#include <iostream>

int main(){

    char option;
    double num1;
    double num2;
    double result;

    std:: cout << "********CALCULATOR********" << '\n';
    std:: cout << "Enter your option (+ - * /): ";
    std:: cin>> option;

    std:: cout << "Enter #1: ";
    std:: cin >> num1;

    std:: cout << "Enter #2: ";
    std:: cin>> num2;

    switch (option)
    {
    case '+':
        result = num1 + num2;
        std:: cout<< result << '\n';
        break;
    case '-':
        result = num1 - num2;
        std:: cout<< result << '\n';
        break;
    case '*':
        result = num1 * num2;
        std:: cout<< result << '\n';
        break;
    case '/':
        result = num1/num2;
        std:: cout<< result << '\n';
        break;
    default:
        std:: cout << "Enter valid command";
    }

    std:: cout << "**************************";
    return 0;
}