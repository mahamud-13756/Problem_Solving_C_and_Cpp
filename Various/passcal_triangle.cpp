#include <iostream>

int main() {
    int n;

    std::cin >> n;

  
    for (int i = 0; i < n; ++i) {
        
        for (int j = 0; j < n - i - 1; ++j) {
            std::cout << "  ";
        }

        int coefficient = 1;
 
        for (int k = 0; k <= i; ++k) {
            std::cout << coefficient << "  ";
            coefficient = coefficient * (i - k) / (k + 1);
        }
        std::cout << std::endl;
    }

    return 0;
}
