//========“In the name of ALLAH, The Most Gracious and The Most Merciful“==========| Last Update: 19-022024
    // problem link : https://codeforces.com/problemset/problem/1906/A
    // Name         : .cpp
    // Author       : Md. Mahamud Mredha
    // Version      :
    // Copyright    : use it under your responsibility
    // Description  : Rating , Ansi-style
    // status       : accepted
//==================================================================================|


#include<bits/stdc++.h>
using namespace std;


#define ll                  long long int
#define ull                 unsigned long long

#define py cout<<"YES\n";
#define pn cout<<"NO\n";


/*----Start Needed Function-----------------------------------------------*/

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
//-------------------------------------------------

// Function to calculate the number of pairs (C(n, r))
int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}
//------------------------------------------------------------

// Sum of Digits
int sumOfDigits(int number) {
    int sum = 0;

    while (number > 0) {
        sum += number % 10;  // Add the last digit to the sum
        number /= 10;        // Remove the last digit
    }

    return sum;
}
//-----------------------------------------------------------------


/*----Ended Needed Function-----------------------------------------------*/










//----Used Function in this Program---------------------------------

void solve()
{

}

//----int main()----------------------------------------------------
int main() {
    char A[5][5];

    // Initialize all cells with 'D'
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            A[i][j] = 'D';
        }
    }

    // Input values for the inner part of the array
    for (int i = 1; i <= 3; ++i) {
        for (int j = 1; j <= 3; ++j) {
            std::cin >> A[i][j];
        }
    }

//    // Display the array
//    for (int i = 0; i < 5; ++i) {
//        for (int j = 0; j < 5; ++j) {
//            std::cout << A[i][j] << " ";
//        }
//        std::cout << std::endl;
    multimap<int, int> pr;
    char ck='D';
    for (int i = 1; i <= 3; ++i) {
        for (int j = 1; j <= 3; ++j) {

            if(A[i][j]<ck){
                pr.clear();
                ck=A[i][j];
                int key=i, val=j;
                pr.insert({key,val});
            }else if(ck == A[i][j]){
                ck=A[i][j];
                int r=i, c=j;
                pr.insert({r,c});
            }
        }
    } // end to get all less letter positions.

//    for (const auto& it : pr) {
//        std::cout << it.first << ": " << it.second << std::endl;
//    }

    // Greedy method start.
    vector<char> vc;
    for(auto it:pr){
       //std::cout << it.first << ": " << it.second << std::endl;
        int r=it.first, c=it.second;
        vc.push_back(A[r][c]);
        char dc=A[r][c];
        A[r][c]='D';
        int d1=r, d2=c, p,q,i,j;

        for(i=r-1; i<r+1; ++i)
        {
            for(j=c-1; j<c+1; ++j)
            {
                char ck1='D';
                if(A[i][j]<ck1){
                    ck1=A[i][j];
                     p=i, q=j;
                }
            } // inner for loop end.

            if(i==r+1){
                vc.push_back(A[p][q]);
                int d3=p, d4=q;
                char dc2= A[d3][d4];
                if(vc.size()%3==0){
                    A[d1][d2]=dc;
                    A[d3][d4]=dc2;
                    break;
                }
                r=p; c=q;
                i=p-2; j=q-1;
            }
        }

    }

    for(auto it: vc){
        cout<<it<<" ";
    }


    return 0;
}
