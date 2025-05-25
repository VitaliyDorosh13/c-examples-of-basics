#include <iostream>
#include <ctime>
#include <stdlib.h>

int main(){

    srand(time(0));
    int randNum;
    randNum = rand() % 5 + 1;

    switch (randNum)
    {
    case 1:
        std:: cout << "You win a bumper sticker \n";
        break;
    case 2:
        std:: cout << "You win a t-shirt \n";
        break;
    case 3:
        std:: cout << "You win a free lauch \n";
        break;
    case 4:
        std:: cout << "You win a gift card \n";
        break;
    case 5:
        std:: cout << "You win a concert stickers \n";
        break;
    }
    return 0;
}