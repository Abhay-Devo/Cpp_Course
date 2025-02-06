// (?)(:) are ternary operator. used to convert if else statement into one liner
// TEMPLATE:-   // Variable = <condition> ? <result if cond is true> : <result if cond is false>
// CAN CREATE NESTED AND EVEN COMPLEX IF ELSE STATEMENT, BUT GENERALLY NOT RECOMMENDED

#include <iostream>

static int p_level = 3;
static int p_age = 20;

int main()
{
    // ternary operator does nothing but encapsulate(make one liner code) of if else statement
    if (p_level<5)
    {
        std::cout << "begineer" << std::endl;
        
    }
    else
    {
        std::cout << "Pro" << std::endl;
        
    }

    // So this lengthy if else statement can be written in one line like this:

    std::string result = p_level<5 ? "Begineer_t" : "pro_t";   
    std::cout << result << std::endl;
    
    // NESTED ONE LINER IF ELSE:
    
    std::string nested_result = p_level<5 && p_level>=1 ? p_age>=21 ? 
    "Pro_Player" : "Medium_Player": "Begineer_Player";

    // temp:- variable= <1st_cond> ? <2nd_cond if result> ? "2nd cond if result" : 
    // "2nd cond else result" : "1st cond else result";
    
    std::cout << nested_result << std::endl;
    
}