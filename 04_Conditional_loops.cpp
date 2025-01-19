#include <iostream>

int main()
{
    // conditionals and loops in cpp are as same as in c.

    for (int i = 0; i < 5; i++)
    {
        if (i%2==0)
        {
            continue;    // continue, break, and return also works the same
        }
        
        std::cout << "hello! world" << std::endl;
        std::cout << i << std::endl;
        
    }
    

}