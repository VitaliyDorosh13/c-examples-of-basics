#include <iostream>

int main(){

    int age;
    
    std::cout<< "Enter your age: ";
    std:: cin>> age;

    if(age>=18){
        std:: cout<< "You are adult";
    }
    else if (age<0)
    {
        std:: cout << "You are havent born"; 
    }
    
    else{
        std:: cout<< "Small boy";
    }
    return 0;
}