// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int fahrenheit = 100;
    int celcius;

    celcius = ((float)5/9.0) * (fahrenheit-32);

    std::cout << celcius << std::endl;

    float weight = 10.99;

    std::cout << weight << std::endl;
    std::cout << (int)weight << std::endl;
    std::cout << (int)((weight - (int)weight) * 10000) << std::endl;



    std::cout << std::endl << std::endl;
    return (0);
}
