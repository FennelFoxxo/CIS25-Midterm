#include <iostream>
#include <string>

int main() {
    std::string name;
    int age, favorite_number;
    
    // Ask for the user's name
    std::cout << "What is your name? ";
    std::cin >> name;
    
    // Ask for the user's age
    std::cout << "How old are you? ";
    std::cin >> age;
    
    // Ask for the user's favorite number
    std::cout << "What is your favorite number? ";
    std::cin >> favorite_number;
    
    // Print the user's info in a pretty formatted way
    std::cout
        << "Your name is " << name
        <<", you are " << age << " years old, "
        << "and your favorite number is " << favorite_number
        << ". Nice to meet you!" << std::endl;
    
    // Examples of different types
    int my_int = 12345;
    float my_float = 3.1415;
    char my_char = '$';
    std::string my_string = "Hello World! This is a modern C++ string";
    const char* my_c_string = "Hello World! This is a C string";
    
    // Print out the previous example variables
    std::cout << "This is an int: " << my_int << std::endl;
    std::cout << "This is a float: " << my_float << std::endl;
    std::cout << "This is a char: " << my_char << std::endl;
    std::cout << "This is a string: " << my_string << std::endl;
    std::cout << "This is a C string: " << my_c_string << std::endl;
}
