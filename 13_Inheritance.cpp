// Inheritance help us to use variables and methods of a class into another one (parent-child) class

#include <iostream>

class Entity
{
    // This is a superclass(parent class)
public:

    int X, Y;

    void move(int x_m, int y_m){
        X += x_m;
        Y += y_m;
        std::cout << "X and Y is: " << X << ", " << Y << std::endl;
        
    }
};

class Player : public Entity
{
    // this is a subclass(child class) taking inheritance from parent(super) class
public:
    const char* name;

    void print_name(){
        std::cout << name << std::endl;
        
    }
};


int main()
{
    Player p1, p2;

    // "p1" object of player class using var & methods of Entity class becoz of inheritance
    p1.X = 5;
    p1.Y = 6;
    p1.move(3, 5);

    // "p2" object of player class using same class
    p2.name = "abhay";
    p2.print_name();
}