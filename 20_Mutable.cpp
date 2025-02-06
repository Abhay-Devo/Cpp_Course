

#include <iostream>
#include <string>

class Entity
{
private:
    const std::string m_name = "shyam";

    mutable int m_age = 5;
    mutable int m_getter_counter = 0;       // this variable can now be modifies into const methods

public:
    // Getter function
    const std::string& getName() const //const in last guarantee the vars inside will not be modified
    {
        m_getter_counter++;
        return m_name;
    }

    // Setter function
    void setAge() const
    {
        m_age = 20;
    }
    
};

int main()
{
    const Entity e;
    std::cout << e.getName() << std::endl;
    
    // There is one use of mutable in lambda function when the parameters is passed by value to it.
    
}