#include <iostream>


int main(){

    int x;
    int y;
    int sum;

    x = 9;
    y = 10;
    sum = x + y;

    double a = 2.55;
    double b = 3.33;
    double sum2 = a + b;

    char z = 't';
    char m = 'p';

    bool isTall = true;
    bool isFast = false; 
    
    std::cout << x << '\n';
    std::cout << y <<  '\n';
    std::cout << sum <<  '\n';

    std::cout << a << '\n';
    std::cout << b <<  '\n';
    std::cout << sum2 <<  '\n';

    std::cout << z << '\n';
    std::cout<< m <<  '\n';

    std::cout<< isTall << '\n';
    std::cout<< isFast <<  '\n';

    //string (object that represants a sequence of text)
    std::string name = "Vitalii";
    std::string skil = "popower";
    std::string type = "charity";

    std::cout<< name << '\n';
    std::cout<< skil << '\n';
    std::cout<< type << '\n';


    return 0;
}