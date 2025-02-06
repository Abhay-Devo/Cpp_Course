/* there are two ways to instanttiate/create an object out of class,
    one on stack like normal one(<class name> <object name>;), which is automatic
    other one is on heap using NEW keyword (<class name*> <object name> = new <class name>;)
    now for object on heap they can live for ever in the program so we have to mannualy clean it up.
    using the delete keyword...*/

#include <iostream>

using String = std::string;   // here by using "using" keyword we can write string instead of std...
class Entity
{
private:
    String m_name;

public:
    //Constructor
    Entity(): m_name("unknown") {}    // Empty constructor

    Entity(const String& name)        // constructor with parameter
    :m_name(name)
    { 
    }

    // Getter method
    const String& GetName()const
    {
        return m_name;
    }

};

int main()
{
    /* Object created on stacks(with limited scope), 
    gets problematic when created inside any other func, and need to use it outside that func */
    Entity e_stack;      
    std::cout << e_stack.GetName() << std::endl;
    

    // Object created on heap(using new and deleted using delete)
    Entity* e_heap;
    {e_heap= new Entity("Kumar");
    }                               // these two braces will simulate the scope of the objects
    
    std::cout << e_heap->GetName() << std::endl;
    delete e_heap;
}