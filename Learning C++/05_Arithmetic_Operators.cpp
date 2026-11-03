/*
    Here are arithmetic operators demostrated
    and how to shorten basic mathematical
    operations in variables.
*/


#include <iostream>

namespace example1 {
    int gummy_bears = 12;
}

namespace example2 {
    double gummy_bears = 6 - 5 + 4 * 3 / 2; // = 7
}

int main() {

    using namespace example1;

    //gummy_bears = gummy_bears + 4;
    //gummy_bears+=2;
    //gummy_bears++;   

    //gummy_bears = gummy_bears - 4;
    //gummy_bears-=2;
    //gummy_bears--;

    //gummy_bears = gummy_bears * 2;
    //gummy_bears*=10;

    //gummy_bears = gummy_bears / 2;
    //gummy_bears/=6;

    //int remaining_gummy_bear_pieces = gummy_bears % 5;

    //std::cout << '\n' << remaining_gummy_bear_pieces << '\n';

    /*
        From here it's just an example of first parenthesis,
        then multiplication & division and at last addition
        & subtraction when calculating with integers.
        Or as I like to say in German:
        "Klammer vor Punkt vor Strich"
    */

    //std::cout << example2::gummy_bears;
    gummy_bears = 6 - (5 + 4) * 3 / 2; // = -7
    std::cout << gummy_bears;
    return 0;
}