// Enums short for enumeration, we can use these to organize our set of integer values in our code

#include <iostream>

enum example : char  // now after using char the size of single int is chnged to 1 byte from 4.
{

    // Even if we set just one value of 'a' others will be increment 1 automatically
    // Integer(4 bytes) by default, although can change their size by assigning to other types
    A = 0, B = 1, c = 2  
};

int main()
{
    example value = B;  // Now by using enum(example), you can't set the value to something else

    if (value == 1){
        // Do something
    }

    else if(value == A)
    {
        // Do something else
    }

    else
    {
        // Do something else
    }
    
}