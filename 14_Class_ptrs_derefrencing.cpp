// class pointers is used where we need to allocate object memory dynamically(in heap) compared to normal
// object(instance) creation where memory is managed automatically(in stack), 

// In class ptr object creation a object of class is created and memory is allocated using "new" keyword
// and then a ptr is pointing to that return address of that object.

// In case of out example = entity_ptr and player_ptr is pointing to the address of their respective
// object created by "new" in heap

#include <iostream>
#include <string>

class Entity
{

public:
    std::string getName(){      // its a method whose return type is string
        return "Entity class";
    }
};

class Player : public Entity
{

private:
    // "m" signifies it's a member variable(good practice to diff btw normal vars and class member vars)
    std::string m_name;     

public:

    // here using ":" after the const parameter we directly intialize the m_name(var) to name 
    // it saves few steps at runtime(if m_name is assigned in body to name), constructor first
    // create a variable and then copy the value in name to it, but here both occurs at same time.
    Player(const std::string& name) : m_name(name) 
    {
        // No body 
    }
    
    std::string getName() 
    {
        return m_name;
    }
};

int main()
{
    // here creating object of class using pointer, read explanation above
    Entity* entity_ptr = new Entity();

    // "->" simplies the code from = (*entity_ptr).getname() to this (entity_ptr->getname()).
    std::cout << entity_ptr->getName() << std::endl; 
    
     


    Player* player_ptr = new Player("kumar");
    
    std::cout << player_ptr-> getName() << std::endl;
    
    
}