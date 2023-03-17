#include <iostream>

int Calculate(int x, int y) {
    int result = x + y;
    return result;
}

namespace first {
    int x = 0;
}
namespace second {
    int x = 1;
}

int main() {
    using std::string;
    using std::cout;
    string name = "Ulvi";
    string day = "Friday";
    int x = 5;
    cout << "Hello " << name << std::endl;
    cout << "Today is good day, because it's " << day << std::endl;
    cout << x << std::endl;
    return 0;
}
