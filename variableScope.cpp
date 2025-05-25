#include <iostream>

/*void printNum();

int main(){

    //Local variables - declared inside function or block {}
    //Global variables - declared outside of all function

    int myNum1 = 1;
    //std::cout << myNum1;
    printNum();

    return 0;
}
void printNum(){
    int myNum = 2;
    std::cout << myNum;
}
*/

//OR
int myNum = 3;
void printNum();

int main(){

    int myNum = 1;

    printNum();
    std:: cout << myNum << '\n';
    return 0;
}
void printNum(){
    int myNum = 2;
    std::cout << ::myNum << '\n';
}