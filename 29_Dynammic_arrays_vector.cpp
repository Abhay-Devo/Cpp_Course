/* Dynammic arrays(called vectors in cpp) is exatly an array with variable-size of elements in it,
   It is used with a vector library in cpp, and used where the size of array is not fixed.
*/

#include <iostream>
#include <vector>
#include <string>

struct vertex
{
    float x, y, z;
};

// overloading the (<<) operator to print all the m_variables insede the vertex struct easily
std::ostream& operator<<(std::ostream& stream, const vertex& vertex )
{
    stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
    return stream;
}

int main()
{
    std::vector<vertex> vertices;
    vertices.push_back({1, 2, 3});
    vertices.push_back({4, 5, 6});

    for (int i = 0; i < vertices.size(); i++)   // Normal way of printing the array, another way is here
    {
        std::cout << vertices[i] << std::endl;
        
    }

    vertices.erase(vertices.begin() + 1);  //delete the 2nd element of array(diff from normal deletion)
    
// range based for loops, works with every iterable data set(if begin(), & end() func is used with them)
    for(vertex& v: vertices)
    {   // pass the value of vertices by refernce to avoid copying
        std::cout << v << std::endl;
    }   
    
    
    vertices.clear(); // delete all the array
}