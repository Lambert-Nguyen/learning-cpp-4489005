// Learning C++ 
// Exercise 03_02
// Classes, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

class cow{
private:
    std::string name;
    int age;
    cow_purpose purpose;
public:
    std::string getName()const{
        return name;
    }
    int getAge() const{
        return age;
    }
    cow_purpose get_purpose() const {
        return purpose;
    }

    void set_age(int new_age){
        age = new_age;
    }

    cow(std::string name_i, int age_i, cow_purpose purpose_i){
        name = name_i;
        age = age_i;
        purpose = purpose_i;
    }
};

int main(){
    cow my_cow("Hildy", 7, cow_purpose::pet);
    std::cout << my_cow.getName() << " is a type-" << (int)my_cow.get_purpose() << " cow." << std::endl;
    std::cout << my_cow.getName() << " is " << my_cow.getAge() << " years old." << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
