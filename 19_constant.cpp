// Const syntax in cpp is used as a symbol and way to tell other programmers to not modify 
// that particular variable and function, and it also restrict at compiler level of doing so.

#include <iostream>
#include <string> 

class Entity
{
private:
    const std::string m_x = "ram";
    mutable int var ;              // this var can be modified even in the const method

public:
    // const here guarentees the member var of the class will not be modified in this method
    std::string getX() const    
    {
        return m_x;
    }
};

int main()
{
    Entity e1, e2;

    // result is reference of original value so can't changed, and result itself have to be const
    const std::string &result = e1.getX();  
    
    std::string result1 = e2.getX();   // result is copying the original value, can change
    result1 = "shyam";

    std::cout << result << std::endl;
    std::cout << result1 << std::endl;


    const int MAX_AGE = 90;

    int* a = new int;               // normal heap pointer, created by using new keyword
    
    *a = 5;                    // both the value inside "a" and where "a" is pointing to can be changed
    a = (int*) &MAX_AGE;


    const int* b = new int;         // const heap pointer 
    
    // *b = 6;                // const before int ensures the value inside the b cannot be changed
    b = (int*)&MAX_AGE;       // but can point to anywhere else, if it wants to


    int* const c = new int;         // heap const pointer

    *c = 6;                   // value of the "c" pointer can be changed
    // c = (int*) &MAX_AGE;   // const after int* ensures "c" cannot point anywhere else


    const int* const x = new int;   // const heap const pointer

    // neither the value inside or where the x points to can be changed(only value can be assingned).   
}