#include <iostream>

int addNumber(int first, int second){
    return first + second;
}


int main() {
            
    int first_num = 13;
    int second_num {7};   // both are correct 

    int sum = addNumber(first_num, second_num);
    std::cout << "sum: "<< sum << std::endl;

    return 0;
}