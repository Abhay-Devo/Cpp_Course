
#include <iostream>

void function()
{
    /* the scope of accessing the var is only limited to this func, if not refrenced or returned,
       but it's lifetime will remain for ever until the program ends, so the variable will save its
       state regardless of the func scope until the whole program ends...*/
    static int i = 0;              
    i++;
    std::cout << i << std::endl;
    
};

int main()
{
    /* would be printing 1, 2, 3, 4, 5... instead of 1, 1, 1, 1, 1... */
    function();
    function();
    function();
    function();
    function();
    function();

    
}