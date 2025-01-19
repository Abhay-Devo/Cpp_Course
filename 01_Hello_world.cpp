#include <iostream>

void log(const char* message)
{
    std::cout << message << std::endl;  // way to print something on console
}

int main()
{
    log("Hello world!!!");
    std::cin.get();                    // way to get input from the user
}
