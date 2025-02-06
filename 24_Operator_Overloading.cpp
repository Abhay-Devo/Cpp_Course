
#include <iostream>

struct VectorMul
{
    float x, y;

    VectorMul(float x, float y)
    :x(x), y(y) {}

    // Operator overloader

    VectorMul add(const VectorMul& other)const   // simple operators, supported by all lang
    {
        return VectorMul(x+ other.x, y+other.y);
    }

    VectorMul multiply(const VectorMul& other)const  // simple operators, suppoted by all lang
    {
        return VectorMul(x * other.x, y * other.y);
    }

    // for adding(overloader)
    VectorMul operator+(const VectorMul& other)const
    {
        return add(other); // if want, can directly write the logic of add func here, it's upto you 
    }

    // for multiplication(overloader)
    VectorMul operator*(const VectorMul& other)const
    {
        return multiply(other);
    }
};


int main()
{
    VectorMul position(2.5, 3.9);
    VectorMul speed(3.1, 1.2);
    VectorMul powerup(9.1, 6.5);
    

    // Simple operator usage, but we can overload(change) operator and make them simple
    VectorMul result = position.add(speed.multiply(powerup)); 
    std::cout << result.x << ' ' << result.y << std::endl;

    // Because of overloading we can do this simply, note both result are same, and work fine
    VectorMul result1 = position + speed * powerup;
    std::cout << result1.x << ' ' << result1.y << std::endl;

    
}