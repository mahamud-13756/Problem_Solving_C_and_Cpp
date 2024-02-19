#include <iostream>

int sumOfDigits(int number) {
    int sum = 0;

    while (number > 0) {
        sum += number % 10;  // Add the last digit to the sum
        number /= 10;        // Remove the last digit
    }

    return sum;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    int result = sumOfDigits(num);

    std::cout << "Sum of digits: " << result << std::endl;

    return 0;
}
