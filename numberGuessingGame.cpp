#include <iostream>
#include <stdlib.h>
#include <ctime>

int main(){

    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() %100) +1 ;

    std::cout << "+++++++++ NUMEBER GUESSING GAME+++++++++++";

    do{
        std:: cout << "Enter a guess between 1-100: ";
        std:: cin>> guess;
        tries ++;
        
        if(guess> num){
            std:: cout << "Too high\n";
        }
        else if(guess < num) {
            std:: cout << "Too low\n";
        }
        else{
            std:: cout << "CORRCT! # of tries " << tries << '\n';
        }
        std::cout << "++++++++++++++++++++++++++++++++++++++\n";
    }
    while (guess!= num);

    return 0;
        
}