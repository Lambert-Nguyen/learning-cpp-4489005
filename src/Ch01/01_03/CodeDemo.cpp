// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout << "Please input username: " << std::flush;
    std::cin >> str;

    std::cout << "Username is: " << str;

    std::cout << std::endl << std::endl;
    return (0);
}
