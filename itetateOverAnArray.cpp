#include <iostream>

int main(){

    /*std::string students[] = {"Kale", "Bob", "Terry", "Ozzy"};

    for(int i = 0; i< sizeof(students)/sizeof(std::string); i++){
        std::cout << students[i] << '\n';
    }
    */
   char symbols [] = {'F', 'Z', 'D', 'L', 'M'};
   for(int i = 0; i < sizeof(symbols)/sizeof(char); i++){
    std:: cout << symbols[i] << '\n';
   }

    return 0;
}