#include <bits/stdc++.h>
#define MAXX 10000007
#define INF 1000000009

using namespace std;

int f(vector<int> &d, int v) {
    int day = 1, dist = 0;
    for(int x : d) {
        if(x > v) {
            return INF;
        }
        else if(dist+x > v) {
            day++;
            dist = x;
        }
        else {
            dist += x;
        }
    }
    return day;
}

void g(vector<int> &d, int v, int k, vector<int> &soln) {
    int day = 1, dist = 0;
    for(int i=0; i<d.size(); i++) {
        int x = d[i];
        if(dist+x > v || d.size()-i-1 < k-day) {
            soln.push_back(dist);
            day++;
            dist = x;
        }
        else {
            dist += x;
        }
    }
    soln.push_back(dist);
}

int solve(vector<int> &d, int k, vector<int> &soln) {
    int lo = 1, hi = MAXX;
    while(lo < hi) {
        int md = (lo+hi)/2;
        if(f(d, md) <= k) hi = md;
        else lo = md+1;
    }

    g(d, hi, k, soln);

    return hi;
}

int main() {
    int T;
    scanf("%d", &T);
    for(int t=1; t<=T; t++) {
        int n, k;
        scanf("%d %d", &n, &k);
        vector<int> d(n+1), soln;
        for(int i=0; i<n+1; i++) scanf("%d", &d[i]);
        printf("Case %d: %d\n", t, solve(d, k+1, soln));
        for(int v : soln) {
            printf("%d\n", v);
        }
    }
}

/**
4 3
7 2 6 4 5
5 1
5 7 7 5 6 3
4 3
1 1 1 1 100

*/
