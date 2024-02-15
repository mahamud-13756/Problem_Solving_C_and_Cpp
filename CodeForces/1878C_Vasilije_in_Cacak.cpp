//https://codeforces.com/problemset/problem/1878/C
//submitted 900

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long int n,k; cin>>n>>k;
        long long int x; cin>>x;

        long long int minimum_add= (k*(k+1))/2;
        long long int dif = n-k;
        long long int maximum_add= ((n*(n+1))/2) - ((dif*(dif+1))/2);

        if(x<minimum_add || x>maximum_add) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}















/* // EXPLAIN ATION ACHE ER MODDHE
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
*/
