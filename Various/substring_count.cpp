#include <bits/stdc++.h>
#include <ukkonen/suffix_tree.hpp>

using namespace std;

int countDistinctSubstrings(const string& s) {
    ukkonen::suffix_tree<char> st(s.begin(), s.end());
    return st.size() - 1; // Subtract 1 to exclude the empty substring
}

int main() {
    string input = "ababa";

    int result = countDistinctSubstrings(input);

    cout << "Number of distinct substrings for \"" << input << "\": " << result << endl;

    return 0;
}
