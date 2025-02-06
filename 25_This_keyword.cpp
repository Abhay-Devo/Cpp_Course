
#include <iostream>

class Entity;      // this declaration helps compiler to know that entity exists for printingEntity

void printingEntity(Entity* e); 
// declaration helps compiler know printingEntity exits when it goes in class entity definiton 

class Entity
{
public:
    int x, y;

    Entity(int x, int y)
    // : x(x), y(y)    we can do this(and everything will work well), but if don't wanna do it then.
    {
        //1st USE CASE:
        this->x = x;     // simple (x = x;, y = y) will not work
        this->y = y;     // (this here identifies that left x & y are member variable)


        //2nd USE CASE:
        // when calling an outside func from the class.
        printingEntity(this);
    }
};

void printingEntity(Entity* e)
{
    std::cout << e->x << ", " << e->y << std::endl;
    
};

int main()
{
    Entity e(5,6);
    
}