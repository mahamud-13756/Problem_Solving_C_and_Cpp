#include <iostream>
#include <vector>

void constructPermutation(int N, int K) {
    std::vector<int> perm(N);

    // Initialize odd and even counts
    int oddCount = 0, evenCount = 0;

    // Fill permutation array
    for (int i = 1; i <=N; ++i) {
        if ((i + 1) % 2 == 0) {
            perm[i] = ++evenCount;
        } else {
            perm[i] = ++oddCount;
        }
    }

    // Adjust permutation to satisfy condition
    for (int i = 0; i < N - 1 && K > 0; i += 2) {
        perm[i + 1] = perm[i + 1] % 2 == 0 ? perm[i + 1] + 1 : perm[i + 1] - 1;
        --K;
    }

    // Output permutation
    for (int num : perm) {
        std::cout << num << " ";
    }
}

int main() {
    int N, K;
    std::cin >> N >> K;
    constructPermutation(N, K);
    return 0;
}
