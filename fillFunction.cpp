#include <iostream>
#include <algorithm>

int main (){

    //fill() - fillings a range of elements with a specified value 
    //         fill(begin, end, value)

    const int SIZE = 100;

    std::string grades [100];

    std:: fill(grades, grades + SIZE, "lose");
    
    for(std::string grade : grades){
        std:: cout << grade <<  '\n';
    }
    
    /*
    for(int i = 0; i < sizeof(grades)/sizeof(grades[0]); i++){
        std:: cout << grades[i] << '\n';
    }
    */
    return 0;
}