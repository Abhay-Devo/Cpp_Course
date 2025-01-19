// Pointers works as same as they work in c.

#include <iostream>

void swap_func(int* x, int* y){
    int z;
    z = *x;
    *x = *y;
    *y = z;

}

int main()
{
    int a = 5;
    void* ptr1 = &a;   // here void* ptr is a pointer why doesn't have any type like int, char etc
    

    // there is also a null pointer which doesn't point to anything called null pointer.
    void* ptr = 0;        // OR
    int* ptrs = nullptr;  // it could be of any type

    int* ptr2 = &a;
    *ptr2 = 8;         // here we are dereferencing the the pointer changing 
                       // the value at the address stored in the ptr2
    
    int x = 5;
    int y = 6;

    std::cout <<"X and Y before swap: " << x << " and " << y << std::endl;
    
    swap_func(&x, &y);   // giving var addr using ptr to func to swap the value

    std::cout <<"X and Y after swap: " << x << " and " << y << std::endl;
    
    
}