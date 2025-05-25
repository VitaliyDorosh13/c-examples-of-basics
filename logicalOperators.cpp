#include <iostream>

int main(){
    // && - check if tw condition is true
    // || - check if at least one of conditions if true 
    // ! - reverse the logical state of its operand


    int temp;
    bool sunny = false;

    std:: cout << "Enter the temperature: ";
    std:: cin >>  temp;

    if(temp> 0 && temp< 30){
        std::cout << "The tamperature is good! ";
    }
    else{
        std:: cout << "the temperature is bad! ";
    }

    if(sunny){
        std:: cout << "Its sunny outside! ";
    }
    else{
        std:: cout << "Its too cold! ";
    }
    return 0;
}