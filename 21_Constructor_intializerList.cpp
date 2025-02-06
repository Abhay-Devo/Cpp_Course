#include <iostream>

class Entity
{
private:
    std::string m_name = "kumar";
    int m_x;

public:

    // constructor will be called when no parameter will be passed, while creating new obj
    Entity()
    : m_name("Unknown"), m_x(5)  // Initailizing variable here is much better, but should be inorder
    {
        // can also intialize variables and methods here, but
    }

    // Called when given an parameter while creating an object
    Entity(const std::string& name) 
    :m_name(name), m_x(10)
    {
        // Same methods will be good here and var in that area
    }

    // getter method
    const std::string& getName() const
    {
        return m_name;
    }

};

int main()
{
    Entity e0;                             // will be calling the 1st cosntructor
    std::cout << e0.getName() << std::endl;
    
    Entity e1("abhay");                     // Will be calling the 2nd constructor
    std::cout << e1.getName() << std::endl;
    
    
}