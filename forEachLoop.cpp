#include <iostream>

int main(){
    //foreach loop - loop that eases the traversal over an iterable data set

    /*

    std:: string co_workers[] = {"Gabriel", "Sancho", "Oliver", "Kack"};

    for(int i = 0; i < sizeof(co_workers)/sizeof(co_workers[0]); i++ ){
        std:: cout << co_workers[i] << '\n';
    } 
    */
    /*
    for(std:: string worker : co_workers){
        std:: cout << worker << '\n';
    }*/

    double system [] = {1.1, 2.5, 3.3, 6.7, 8.3};

    for(double sys : system){
        std:: cout << sys << ' ';
    }
    
    return 1;
}