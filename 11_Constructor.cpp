// Constructor is created by the same name as of class, it gets automatically intialized as 
// soon as any object(instance) gets created. and you can have muliple of these in single class
// if they have different parameter in them. 

#include <iostream>

class Entity
{

public:
    // Entity() = delete;   // It will delete the default constructor, if needed

    float x, y;

    // This is a constructor
    Entity(){
        // As soon as any object gets created from the class the x and y var 
        // will get intiallized to these values
        x = 5.6f;   
        y = 3.2f;
    }

    void print(){
        std::cout << x << ", " << y << std::endl;
        
    }
};

int main()
{
    Entity e1;

    std::cout << e1.x << std::endl;
    e1.print();
    
    
}