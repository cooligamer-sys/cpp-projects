/*
    This file shows how typedef and using can be used
    to set nicknames to long or complicated commands,
    which can then improve readability and lower the
    chance of typos in code due to ease of typing.
*/


#include <iostream>

//typedef std::string text_t;
//typedef int nr_t;
using text_t = std::string;
using nr_t = int;

int main() {

    text_t firstName = "Justus";
    nr_t age = 15;
    std::cout << '\n' << "Hallo, ich heiße " << firstName << " und ich bin " << age << " Jahre alt." << '\n';

    return 0;
}