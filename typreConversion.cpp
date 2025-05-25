#include <iostream>

int main(){

    //int x = 3.14;
    //double x = (int)3.14;

    //std:: cout << x;

    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;

    std:: cout << score<< "%";
    return 0;
}