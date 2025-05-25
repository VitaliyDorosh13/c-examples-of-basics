#include <iostream>
double getTotal(double prices[], int size);

int main(){

    double prices[] = {4.55, 5.33, 6,88, 91.01, 44.3};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);

    std:: cout << "$" << total;

    return 0;
}
double getTotal(double prices[], int size){
    double total = 0;

    for(int i = 0; i < size; i++){
        total += prices[i]; 
    }
    return total;

}