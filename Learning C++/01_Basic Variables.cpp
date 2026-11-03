/*
    The basic variable types and how to use them.
    This is the first file in this folder.
*/


#include <iostream>

int main(){

    // Why are you reading my code??

    /*
        Really cool stuff
        right??
    */

    // integer (whole number)
    int alter = 21;
    int jahr = 2027;

    // double (number including decimals)
    double kontostand = 27.39;
    double zeugnisdurchschnitt = 2.4;

    // char (single character)
    char grade = 'B';
    char initial = 'D';

    // boolean (true or false [when printing shown as 0s and 1s] )
    bool student = true;
    bool power = false;
    bool available = true;

    // string (objects that respresent a sequence of text)
    std::string name = "Daniel";
    std::string day = "Saturday";
    std::string favFood = "Mozarella Sticks";
    std::string street = "Lüdersring 42";
    std::string postalCode = "22547";
    std::string city = "Hamburg";
    std::string country = "Germany";
    std::string continent = "Europe";

    std::cout << "Hi, I'm " << name << " and my favorite day is " << day << " and my favorite food is " << favFood << ". I live at " << street << ", " << postalCode << " " << city << ", " << country << ", " << continent << ", Earth." << '\n';

    return 0;
}