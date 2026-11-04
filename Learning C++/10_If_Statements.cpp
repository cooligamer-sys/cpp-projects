#include <iostream>

int main()
{
    int age;

    std::cout << '\n' << "How old are you?: ";
    std::cin >> age;

    if(age >= 150)
    {
        std::cout << "You are already dead!" << '\n';
        
    }
    else if(age >= 18)
    {
        std::cout << "You may enter the program." << '\n';
    }
    else if(age >= 13)
    {
        std::cout << "You may enter the teenage version of the program." << '\n';
    }
    else if(age >= 1)
    {
        std::cout << "You are not allowed to enter the program!" << '\n';
    }
    else
    {
        std::cout << "Invalid age! Please ensure, that you typed your age in as a number (15, 21, 49) and that it is a valid age." << '\n';
    }


    return 0;
}