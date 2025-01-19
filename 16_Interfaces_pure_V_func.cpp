// With virtual functions we can override it in any subclass, but it's optional(you can override it
// if you want to), but in Interfaces(pure virtual functions) you have to override(give body to it)
// to use the entire class otherwise it will give an compile error.

#include <iostream>
#include <string>

class Entity
{

public:
    // Pure virtual function(Interface), defenition(body) in a diff subclass
    virtual std::string getName() = 0;

    void print_entity(){
        std::cout << "checking pure virtual func class" << std::endl;
        
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
    
    std::string getName() override { return m_name; }
};

void printable(Entity* entity){
    std::cout << entity->getName() << std::endl;
    
}

int main()
{
    // You can't make object(instanciate) from Entity class becoz it contain pure virtual func
    // Entity* entity_ptr = new Entity();  // Not possible eventhough has more methods apart from "V"

    Entity* entity_ptr = new Player("shyam");  
    printable(entity_ptr);
    entity_ptr->print_entity();


    // Pointing to Player class
    Player* player_ptr = new Player("kumar");
    printable(player_ptr);
    
}