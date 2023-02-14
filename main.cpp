#include <iostream>

int main() {
    char op;
    double a;
    double b;
    double c;

    std::cout << "Tell me the operation to do " << std::ends;
    std::cin >> op;
    std::cout << "Tell me a ";
    std::cin >> a;
    std::cout << "Tell me b ";
    std::cin >> b;

    switch (op) {
        case '+':
            c = a + b;
            std::cout << "The result is " << c << std::endl;
            break;
        case '-':
            c = a - b;
            std::cout << "The result is " << c << std::endl;
            break;
        case '*':
            c = a * b;
            std::cout << "The result is " << c << std::endl;
            break;
        case '/':
            if (b != 0) {
                c = a / b;
                std::cout << "The result is " << c << std::endl;
            } else {
                std::cout << "b can't be 0" << std::endl;
            }
            break;
        default:
            std::cout << "op not valid";
    }
    return 0;
}
