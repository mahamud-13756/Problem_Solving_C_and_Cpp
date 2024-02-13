#include <iostream>
#include <vector>

void generateSubsets(int n, int k, int index, std::vector<int>& currentSubset) {
    if (currentSubset.size() == k) {
        // Print or process the generated subset
        int ad=0;
        for (int num : currentSubset) {
            
            std::cout << num << " ";
            ad+=num;
        }
        std::cout<<"-->"<<ad<< std::endl;
        return;
    }

    for (int i = index; i <= n; ++i) {
        currentSubset.push_back(i);
        generateSubsets(n, k, i + 1, currentSubset);
        currentSubset.pop_back();
    }
}

int main() {
    int n, k;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    std::cout << "Enter the value of k: ";
    std::cin >> k;

    std::vector<int> currentSubset;
    generateSubsets(n, k, 1, currentSubset);

    return 0;
}
