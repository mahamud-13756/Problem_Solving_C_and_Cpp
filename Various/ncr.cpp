#include <iostream>

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Function to calculate the number of pairs (C(n, 2))
int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n,r;
    std::cout << "Enter the value of n and r: ";
    std::cin >> n>>r;

    int result = nCr(n,r);
    std::cout << "Result of nCr: " << result << std::endl;

    return 0;
}
