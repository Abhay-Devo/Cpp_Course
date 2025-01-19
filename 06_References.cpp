// References are same as pointers, they can do everything and anything a pointer can do just using
// a simple and easy syntax.

#include <iostream>

void swap_func(int& a, int& b){    // references is similar to ptrs use & 
    int z;
    z = a;
    a = b;
    b = z;
}

int main()
{
    int x = 20;
    int& refrence_to_var = x;     // refernce_to_var is just a refrence to var x
    // It doesn't take space in memory and store the addr of x var, just a refernce to x



    // swaping the values of two variables usinng references instead of pointers

    int a = 5;
    int b = 6;

    std::cout << "The values of A and B before swap is: "<< a << " and " << b << std::endl;

    swap_func(a, b);  // here everything work similar to ptrs just the syntax is simple

    std::cout << "The values of A and B after swap is: "<< a << " and " << b << std::endl;
    
}