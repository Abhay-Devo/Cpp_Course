/* There are two main use of arrow(->) operator, other one is very rarely used, 
    1st: We all know instead of defreencing a pointer and then using any func or varible like 
    this[(*ptr).func(), or (*ptr).variable], but with arrow operator we don't need to do all this, 
    but what we can simply do is this(ptr->func(), or ptr->variable).

    2nd: Showing with example(Using operator overloading, not always used, but can if necessary).
    3rd: Used to print the memory offset of member variables, helpful for debugging
    like [ int x, y, z; so here x will be at 0 offset, y will be at offset+4, z will be at offset+8]
*/
#include <iostream>

class Entity
{
private:
    int m_x;

public:
    void print() const
    {
        std::cout << "hello" << std::endl;
        
    };
};

class Scopedptr
{
private:
    Entity* m_obj;

public:
    Scopedptr(Entity* entity)
    :m_obj(entity)
    {
    }

    ~Scopedptr()
    {
        delete m_obj;
    }

    // overloading the (->) operator to return the object
    Entity* operator->()
    {
        return m_obj;
    }
};

int main()
{
    Scopedptr entity = new Entity();
    entity->print();
    
}