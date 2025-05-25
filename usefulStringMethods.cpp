#include <iostream>

int main(){

    std:: string name;

    std:: cout << "Enter you name ";
    std:: getline (std:: cin, name);

    /*if(name.length()>12 || name.empty()){
        std:: cout << "Fill the field of name should have only 12 symbols";
    }
    else{
        std:: cout << "Welcome "<< name;
    }
    */

   //name.append("@gmail.com");
   

   //std:: cout << "You username is now "<< name;
   //std::cout<< name.at(0);

   /* name.insert(1, "aa");
   std:: cout << name;*/
  
  std::cout << name.find('a');
  
    return 0;
}