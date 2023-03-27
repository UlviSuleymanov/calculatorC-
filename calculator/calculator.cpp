//
// Created by Ulvi on 27.03.2023.
//

#include "calculator.h"

using std::cout, std::cin, std::endl;

double add(double x, double y) {
    return x + y;
}

double subtract(double x, double y) {
    return x - y;
}

double multiply(double x, double y) {
    return x * y;
}

double divide(double x, double y) {
    return x / y;
}

void print(std::string alma) {
    std::cout << alma << std::endl;
}

void calculate() {
    print("Please select an operation. 1 for + , 2 for -, 3 for * , 4 for /");
    int x{};
    cin >> x;
    print("Please insert Value for A");
    double a{};
    cin >> a;
    print("Please insert Value for B");
    double b{};
    cin >> b;
    double result{};
    if (x == 1) {
        result = add(a, b);
    } else if (x == 2) {
        result = subtract(a, b);
    } else if (x == 3) {
        result = multiply(a, b);
    } else if (x == 4) {
        result = divide(a, b);
    }
    cout << "Result : " << result << endl;
}