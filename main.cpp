#include <iostream>
//bu bir kommentdir
/*bu multiple bir kommentdir*/
namespace first {
    int a = 10;
}
//calculate prosesi gedir cevrenin parametiri tapilir
double calculate(double radius) {
    const double PI = 3.14;
    double result = 2 * PI * radius;
    return result;
}

int main() {
    using std::cout;
    float c = 5.5f;
    char b = 'c';
    cout << c << std::endl;
    return 0;
}