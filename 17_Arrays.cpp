// Arrays in cpp is just a chain of single type variable(int, char, float etc), It is used to store,
// a long data which is chained together for easy access.

#include <iostream>
#include <array>

int main()
{

// ARRAY IN STACK MEMORY, WITH LIMITED SCOPE AND WILL BE AUTOMATICALLY CLEARED.

//----- Declaring the arrray, but not intializing it.
    int arr1[5];    

    // Intializing the array, one by one
    arr1[0] = 3;
    arr1[1] = 9;
    arr1[2] = 6;
    arr1[3] = 1;
    arr1[4] = 4;

    // Printing the array using for loop
    for (int i = 0; i < 5; i++)
    {
        std::cout << arr1[i] << std::endl;
        
    }


//----- Declaring the array using const value.
    static const int array_size = 8;
    int arr2[array_size];

    // Initializing the array using for loop.
    for (int i = 0; i < array_size; i++)
    {
        arr2[i] = 5;  // with a single value only, can get value from user as well.
    }


//----- Declaring the array and intializing them at same time.
    int arr3[4] = {3, 6, 5, 9};




// ARRAY IN HEAP MEMORY, WITH UNLIMITED LIFE AND HAVE TO CLEAR THEM MANUALLY.
    
    int* heap_arr = new int[5];  // Create Array in heap

    // Intializing this array.
    for (int i = 0; i < 5; i++)
    {
        heap_arr[i] = 3;
    }

    // Printing this  heap array.
    for (int i = 0; i < 5; i++)
    {
        std::cout << heap_arr[i] << std::endl;
        
    }

    // Deleting this array manually to avoid memory leaks.
    delete[] heap_arr;    



// CREATING ARRAY USING STANDARD CPP LIBRARY (array).

    std::array<int, 6> another;  // standard syntax = "std::array<arr_type, arr_size> arr_name;"

}