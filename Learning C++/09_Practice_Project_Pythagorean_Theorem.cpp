#include <iostream>
#include <cmath>

int main()
{
    double a;
    double b;
    
    std::cout << "What is a?" << '\n';
    std::cin >> a;
    std::cout << "What is b?" << '\n';
    std::cin >> b;

    double c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "The answer is " << c;
    
    return 0;
}