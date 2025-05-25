#include <iostream>

int main(){

    /*int month;
    std:: cout << "Enter the number: ";
    std:: cin >> month;

    switch (month)
    {
    case 1:
        std:: cout << "This is January";
        break;
        case 2:
        std:: cout << "This is February";
        break;
        case 3:
        std:: cout << "This is March";
        break;
        case 4:
        std:: cout << "This is April";
        break;
        case 5:
        std:: cout << "This is May";
        break;
        case 6:
        std:: cout << "This is June";
        break;
        case 7:
        std:: cout << "This is July";
        break;
        case 8:
        std:: cout << "This is August";
        break;
        case 9:
        std:: cout << "This is September";
        break;
        case 10:
        std:: cout << "This is October";
        break;
        case 11:
        std:: cout << "This is November";
        break;
        case 12:
        std:: cout << "This is December";
        break;
    default:
         std:: cout << "Please fill the month between 1-12";
    }
    */

   char grade;
   std:: cout << "Enter the letter: ";
   std:: cin>> grade;

   switch (grade)
   {
   case 'A':
    std:: cout<< "You are awasome";
    break;
   case 'B':
    std:: cout<< "You are good";
    break;
    case 'C':
    std:: cout<< "You are so-so";
    break;
    case 'D':
    std:: cout<< "You are not so focused";
    break;
    case 'F':
    std:: cout<< "You are idiot";
    break;
   default:
    std:: cout<< "fill only letter A-F";
   }
    return 0;
}