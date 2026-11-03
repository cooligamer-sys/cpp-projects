/*
    This is just a little example of how you can
    convert the type of variable when using
    the variable in other aspects.
*/


#include <iostream>

int main()
{
    int correct = 13;
    int questions = 21;
    double score = correct / (double)questions * 100; //the "(double)" after the "questions" is the conversion, in which the integer variable "questions" is actively being converted into a double variable for the operation.
    std::cout << score;

    return 0;
}