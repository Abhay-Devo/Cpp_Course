// Creating string of different sizes and by diff ways, their usage and how to add them

#include <iostream>
#include <string>

int main()
{
    // DIFF WAYS TO CREATE STRINGS.

    std::string str1 = "shyam"; // Using Standard library

    const char* str2 = "king";  // Normal raw string (immutable)

    char str3[5] = "Pawn";      // Normal array string (mutable)
    // str3[2] = 'e';

    // char* str4 = "raman";       // Not Allowed(as string are const char*)

    const char16_t* wide_str1 = u"cherno";  // 2 byte string (had to add "u" before string)
    const char32_t* wide_str2 = U"Ayush";  // 4 byte string (had to add "U" before string)

    const wchar_t* wide_str3 = L"Piyush";  // 2-4 bytes string(depend on system type)



    // ADD(CONCANICATE) TWO OR MORE STRINGS.

    using namespace std::string_literals;    // adding string using namespace(string_literals)

    std::string str5 = "shyam "s + str2;    
    std::string str6 = "shyam "s + "sundar";


    // adding two string normally

    std::string str7 = "kumar" + std::string("satyam");  // 1st way 
    str1.append(str5);   // 2nd way
    



    std::cout << str5 << std::endl;
    
}