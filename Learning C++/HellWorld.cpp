#include <iostream>

namespace important{
    int x = 5;
}
namespace less_important{
    int x = 67;
}

int main() {
    using namespace less_important;
    using std::cout;
    using std::string;
    
    string text = "Hello";

    cout << x << " " << text;

    return 0;
}