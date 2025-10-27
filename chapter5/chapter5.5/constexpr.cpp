#include <iostream>

constexpr int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1); // recursive constexpr
}

int main() {
    constexpr int fact5 = factorial(5); // compile-time
    std::cout << "5! = " << fact5 << '\n';

    int x;
    std::cin >> x;
    std::cout << x << "! = " << factorial(x) << '\n'; // runtime
}
