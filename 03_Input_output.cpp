#include <iostream>
#include <string>

int main() {

    // PRINTING DATA    
    std::cout << "Hello c++20 " << std::endl;   
    
    int age{21};
    std::cout << "Age: " << age << std::endl;

    // used to print error messages
    std::cerr << "Error message : something got wrong" << std::endl;
    
    // used to print log messages
    std::clog << "log message : something happened" << std::endl;




    // TAKING INPUT without spaces
    int age1;
    std::string name;

    std::cout << "Please enter your name and age: " << std::endl;

    std::cin >> name;   
    std::cin >> age1;

    // std::cin >> name >> age1;    // more compact form for same thing

    std::cout << "Hello " << name << " you are " << age1 << std::endl;



    // TAKING INPUT with spaces  (NOT WORKING, DON'T KNOW WHY? )
    
    /* std::string full_name;
    int age2;

    std::cout << "Please enter full name and age: " << std::endl;

    std::getline(std::cin, full_name);
    

    std::cin >> age2;

    std::cout << "Hello " << full_name << " you are " 
              << age2 << std::endl; */

    return 0;
}