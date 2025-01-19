// Static class members(func/var)means, they belong to class itself, not to any object(instance)
// Static member variable in class or struct share a share same memory across all the objects
// Can be accessed just by using the class name no need to create a object to access them
 

#include <iostream>

class Counter{
    
public:

    // Declaring a static member variable, need to allocate memory outside(Intiallize & define)
    static int count;

    Counter(){     // This is constructor( use/creation studied later)
        count++;
    }

    // Note Static func can only access static memeber(var) of class, 
    // And doesn't operate on specfic objects(var)
    static void showCount(){    
        std::cout << "Object count of the class: " << count << std::endl;
        
    }
};

// Definition and intialization of static member variable of Counter class
// Definition is must here but the intialization can occur in main as well(or anywhere)
int Counter::count = 0; // if not assigned any value(default will be 0)

int main()
{

    // Accessing the staic func of the class without creating and using object(instances)
    Counter::showCount();   

    Counter c1, c2, c3;     // Creating the objects of the counter class

    Counter::showCount();   // Accessing the staic func without using object(instances) 

    Counter c4, c5;
    Counter::showCount();


}