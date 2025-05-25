#include <iostream>
#include <cmath>

int main(){

    double x = 3;
    double y = 5;
    double s = 3.34;
    double z;

    //z = std::max(x,y);
    //z= std:: min(x,y);
    //z = pow(3, 5);
    //z = sqrt(25);
    //z = std::abs(-10);

    //z=ceil(s);
    //z = floor(s);
    z = round(s);
    std:: cout<< z;
    return 0;
}