// Classes in cpp is as similar structures both work exactly the same, the only diff is by default 
// the data and funcitons(methods) in classes are private while in struct they are public.

#include <iostream>


// now instead of class if we struct everything will work the same, 
// just there will be the diff in public and private property of class and struct
class Player{

public:
    // they are public as tagged.
    int pos_x, pos_y;
    int speed;

    int change_pos(int add_pos_x, int add_pos_y){
        pos_x = pos_x + add_pos_x;
        pos_y = pos_y + add_pos_y; 
        std::cout << pos_x << " and " << pos_y << std::endl;   
        return pos_y, pos_x;
    }

    // they are private by default.
    int a, b;
    int texture;

};

int main()
{
    // now we can use any of the public data and methods created inside the class 
    // with this player1 instance created by the Player class object.
    Player player1; 
    player1.pos_x = 5;
    player1.pos_y = 8;

    int result2, result1 = player1.change_pos(3, 2);
    std::cout << "posx and posy is:"<< result1 << " and " << result2 << std::endl;
    
}

