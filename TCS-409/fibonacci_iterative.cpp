#include <iostream>

long fib(int n) {
    if (n <= 1) return n;
    long a = 0, b = 1, sum = 0;
    while (n - 1) {
        sum = a + b;
        a = b;
        b = sum;
        n--;
    }
    return b;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << fib(n);
    return 0;
}