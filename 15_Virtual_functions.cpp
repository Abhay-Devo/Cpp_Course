// Virtual functions of parent class helps us to override them in their subclass, 
// and helps us for polymorphism(using same code for multiple class objects(even with same name))
// and the same method will work differenty for diff objects of diff class, like here getName works.

#include <iostream>
#include <string>

class Entity
{

public:
    // virtual prefix here tells that this method can be overwritten in any subclass
    virtual std::string getName(){      
        return "Entity class";
    }
};

class Player : public Entity
{

private:
    std::string m_name;     

public:

    Player(const std::string& name) : m_name(name) 
    {
        // No body 
    }
    
    // "override" here signifies that this func is overwritten of some parent virtual method,
    //  and also prevent some syntax error like wrong naming etc
    std::string getName() override { return m_name; }
};

// the function will automatically determine which getname() method to use depend on the object,
// class at runtime.
void printable(Entity* entity){
    std::cout << entity->getName() << std::endl;
    
}

int main()
{
    // Pointing to Entity class
    Entity* entity_ptr = new Entity();
    printable(entity_ptr);  


    // Pointing to Player class
    Player* player_ptr = new Player("kumar");
    printable(player_ptr);
    
    std::cin.get();
    
}