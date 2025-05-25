#include <iostream>
#include <iomanip>
#include <stdio.h>

void shwoBalance (double balance);
double deposit();
double withdraw(double balance);

int main(){

    double balance = 0;
    int choise = 0;

    do{
    std:: cout << "****************** \n";
    std:: cout << "Enter your choise: \n";
    std:: cout << "****************** \n";
    std:: cout << "1. Show Balance \n";
    std:: cout << "2. Deposit money \n";
    std:: cout << "3. Withdrow Money \n";
    std:: cout << "4. Exit \n";
    std:: cin >> choise;

    std:: cin.clear();
    fflush(stdin);

    switch (choise)
    {
    case 1:
        shwoBalance(balance);
        break;
    case 2:
        balance+=deposit();
        shwoBalance(balance);
        break;
    case 3:
        balance-=withdraw(balance);
        shwoBalance(balance);
        break;
    case 4:
        std::cout << "Thanks for visiting \n";
        break;
    default:
    std:: cout << "Invalid choise\n";
    }
    } 
    while (choise!=4 );
    
    return 0;
}

void shwoBalance (double balance){

    std:: cout << "You balance is: $"<< std::setprecision(2) << std::fixed  << balance << '\n';
}
double deposit(){

    double amount = 0;
    std:: cout << "Enter amount to be deposit: ";
    std:: cin >> amount;

    if(amount > 0){
        return amount;
    }
    else{
        std:: cout << "That's a not valid amount: ";
        return 0;
    }
    }

    
double withdraw(double balance){
    double amount = 0;
    std:: cout << "Enter amount to be withdraw: ";
    std:: cin >> amount;

    if(amount > balance){
        std:: cout << "insuffisient funds\n";
        return 0;
    }
    else if (amount <0 )
    {
        std::cout << "That's a not valid amount\n";
        return 0;
    }
    else{
        return amount;
    }

}