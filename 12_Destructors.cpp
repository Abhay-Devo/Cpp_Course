// Destructors are as same as constructors, they just delete all the data and clear the memory
// after a class or function is used and now their is no use of it to prevent memory leaks

#include <iostream>

class Entity
{

public:
    float x, y;

    // Constructor
    Entity(){
        x = 5.1f;
        y = 6.2f;
        std::cout << "Entity created, Memory used!!!" << std::endl;
        
    }

    // Destructors
    ~Entity(){    // It will be called when funciton will exit from the class(to clear memory)

        std::cout << "Entity destroyed, Memory cleared!!!" << std::endl;
        
    }

    void print(){
        std::cout << x << ", " << y << std::endl;
        
    }
};

void calling_entity(){

    Entity e;    // Now here when we created an object constructor will work
    e.print();

    // And after the function will exit the destructor will clear all the memory
}   // here destructor will be called.

int main()
{
    calling_entity();
    
    // You can manually called destructors as well(but its not a common or good practice)
    Entity e1;
    e1.~Entity();

    std::cin.get();
    
    
}