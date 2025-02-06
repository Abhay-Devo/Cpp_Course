// Unique pointer is a type of smart pointer, which is used to allocate memory on heap, 
// And what it does is that it will allocate mem on heap and delete it automatically,
// NOTE:- you cann't copy the unique pointer(becoz if two ptrs pointing two same mem and 
//        if you freed the mem by deleting 1 ptr, the other ptr will be pointing to empty mem)

#include <iostream>
#include <memory>

class Entity
{
public:
    Entity()
    {
        std::cout << "Entity created, Constructor Initalized" << std::endl;
        
    }

    ~Entity()
    {
        std::cout << "Entity destructed, Destructor Intialized" << std::endl;
        
    }

    void print() {}     // dummy method to show case the scope
};

int main()
{

    // Creating object on heap using new and delete
    Entity* e1 = new Entity();
    e1->print();
    delete e1;

    // Now with unique pointer, we don't need to call delete mannually
    std::unique_ptr<Entity> e2 = std::make_unique<Entity>();
    e2->print();

    std::cin.get();
    
    // NOTE:- For unique_ptr the destructor will be called here where the program end(automatic delete)
}