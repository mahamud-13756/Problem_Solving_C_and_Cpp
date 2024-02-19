#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int sumOfDigits(int number) {
    int sum = 0;

    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }

    return sum;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;

        ll total = 45;

        if (n < 10) {
            cout << (n * (n + 1) / 2) << endl;
        } else {
            total += (n / 10) * 45; // Sum of digits for multiples of 10
            total += (n % 10) * (n % 10 + 1) / 2; // Sum of digits for the remaining part
            cout << total << endl;
        }
    }

    return 0;
}
