// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout << "Please input username: ";
    std::cin >> str;

    std::cout << std::endl << "Username is: " << str;

    std::cout << std::endl << std::endl;
    return (0);
}
