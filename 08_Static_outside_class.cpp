// static is a type of prefix used with variable or functions to limit its sccpe in single file 
// it cannot be accessed outside of it even if the func or var is called from other files program

#include <iostream>

static int sum(int a, int b){    // Static function(cannot be used outside the file)
    return a+b;
}

int multiple(int a , int b){    // Non_static function(can be used outside the file, if called)
    return a*b;
}

int main()
{
    static int x = 5;    // these are static varibales
    static int y = 8;

    sum(5, 4);
    std::cout << sum << std::endl;
    
    multiple(5, 5);
    std::cout << multiple << std::endl;  
    
}

