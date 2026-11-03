/*
    Finally, we are able to use user input
    to set variables. This is a massive jump
    and very important for obvious reasons.
    [std::getline(std::cin >> std::ws, variable);] for a string with spaces expected and no white spaces from other inputs accepted.
*/

#include <iostream>

int main()
{
    std::string name;
    int age;

    std::cout << '\n' << "What is your full name?: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "How old are you?: ";
    std::cin >> age;

    std::cout << "So you are " << name << " and you're " << age << " years old." << '\n';
    
    return 0;
}