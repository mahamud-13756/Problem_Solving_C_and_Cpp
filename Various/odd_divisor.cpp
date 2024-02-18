#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        long long int n;
        cin >> n;
        long long int a=n; 
            // Check if n is divisible by 2 multiple times
            while(n % 2 == 0) {
                n /= 2;
            }

            // If n becomes 1, it was a power of 2, so it has no odd divisors
            
            if(n == 1) cout << "NO\n";  
            else cout << "YES\n";
           
                
            

    }
    return 0;
}

/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        long long int n;
        cin >> n;
            // Check if n is divisible by 2 multiple times
            while(n % 2 == 0) {
                n /= 2;
            }

            // If n becomes 1, it was a power of 2, so it has no odd divisors
            if(n == 1) {
                cout << "NO\n";
            } else {
                cout << "YES\n";
            }

    }
    return 0;
}*/
