/* Shared pointer is a type of smart pointers, which is used when you want to copy the same ptr
   over and over again and don't want to delete the memory(which all they are pointing to) 
   just by deleting one pointer, but what it does it keeps a reference no. of how many times the pointer
   is being copied(means potinting to same mem by multiple diff ptrs) and until the ref no. reach 0
   it doesn't delete the memeory data...*/

/* there is other thing called weak_ptr(it copies the mem same like shared_ptr 
   but doesn't increase reference so when the first ptr of shared mem goes out of scope
   mem get deleted, it's became dangling but doesn't thow error and you can just ask it
   (like do you point to any mem before using it)...*/

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
    // Shared Pointer Example
    {
        std::shared_ptr<Entity> e0;  // No object created yet
        {
            std::shared_ptr<Entity> e1 = std::make_shared<Entity>();  // Entity created
            e0 = e1;  // e0 shares ownership

        }  // e1 goes out of scope, but e0 still holds reference -> Object NOT destroyed

    }  // e0 goes out of scope -> Now reference count = 0 -> Object destroyed


    // Weak Pointer Example
    {
        std::weak_ptr<Entity> wp0;  // No object created
        {
            std::shared_ptr<Entity> wp1 = std::make_shared<Entity>();  // Entity created
            wp0 = wp1;  // wp0 holds weak reference

        }  // wp1 goes out of scope -> Object destroyed, wp0 is now dangling
    }

}