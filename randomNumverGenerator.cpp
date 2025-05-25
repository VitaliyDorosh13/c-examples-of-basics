#include <ctime>
#include <iostream>
#include <stdlib.h>

int main(){

    // pseudo-random - not real random mechnism

    srand(time(NULL));
    int num = rand() % 20 + 1;

    std:: cout << num;

    return 0;
}