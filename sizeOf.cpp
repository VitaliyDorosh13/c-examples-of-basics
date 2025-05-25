#include <iostream>

int main(){

    // sizeof() - determines the size in bytes of a :
    //            variables, data types, class, object, etc

    double gpa = 2.5;
    std:: string name = "Vitalii";
    char littera = 'G';
    bool mood = true;
    char grades [] = {'A', 'B', 'C'};
    std:: string people [] = {"Garry", "Lenny", "Tonny"};

    std:: cout << sizeof(gpa) << " bytees\n";
    std:: cout << sizeof(name) << " bytes\n";
    std:: cout << sizeof(littera) << " bytes\n";
    std:: cout << sizeof(mood) << " bytes\n";
    std:: cout << sizeof(grades) << " bytes\n";
    std:: cout << sizeof(people)/sizeof(std::string) << " elements\n";

    return 0;
}