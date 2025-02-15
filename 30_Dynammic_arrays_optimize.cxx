// Optimizing the dyanammic array(Vector).

#include <iostream>
#include <vector>

struct Vertex
{
    float x, y, z;

    // constructor
    Vertex(float x, float y, float z)
    : x(x), y(y), z(z)
    {}

    // copy constructor(It will print something when a copy occur)
    Vertex(const Vertex& vertex)
    : x(vertex.x), y(vertex.y), z(vertex.z)
    {
        std::cout << "copied!!!" << std::endl;
        
    }
};

int main()
{

    /* this is unoptimized becoz,
    1. the vertices is created in the main func and then getting copied

       to the constructor class vector, this is creating an extra copy step for each iteration.
    2. because the no. of element in the array is not predefined after every iteration the vector
       copies all the data add space for on extra element and copies it somewhere else in the memory
       to avoid that if possible add an approximate estimate of the no. of elements needed before 
       insertion.
    */
    std::vector<Vertex> vertices;
    vertices.push_back(Vertex(1, 2, 3));
    vertices.push_back(Vertex(4, 5, 6));  // if constructor is used can do this
    vertices.push_back(Vertex(7, 8, 9));

    std::cout << "\nnext array\n" << std::endl;
    
    // Optimized
    std::vector<Vertex> optimized_vertices;
    optimized_vertices.reserve(3);          
    /*It will reserve place of 3 elements and if requires to add extra element 
      but reduce the performance, becoz now it have to made copies of the data*/
    optimized_vertices.emplace_back(1, 2, 3);
    optimized_vertices.emplace_back(4, 5, 6);
    optimized_vertices.emplace_back(7, 8, 9);  //emblace_back same as push_back but doesn't create copies
    optimized_vertices.emplace_back(34, 23, 90);
}