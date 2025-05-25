#include <iostream>

int main(){

    std:: string name;
    int age;

    std:: cout << "what is your age? ";
    std:: cin >> age;

    std::cout << "what is your name? ";
    //std:: cin >> name;
    std:: getline(std::cin>>std:: ws, name);

    

    std:: cout<< "Hello " << name<< '\n' ; 
    std:: cout<< "You`re age " << age << " old";
    return 0;
}