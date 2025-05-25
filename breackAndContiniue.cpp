#include <iostream>

int main(){
    // breack - out of a loop
    // continiue - skip current iteration

    for (int i = 0; i < 20; i++)
    {
        if(i == 15){
           // break;
           continue;
        }
        std:: cout << i << '\n';
    }
    
    return 0;
}