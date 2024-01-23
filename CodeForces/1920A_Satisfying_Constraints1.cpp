// https://codeforces.com/problemset/problem/1920/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;

    scanf("%lld", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        long long int a[n], x[n];
        long long int max1 = 0, min1 = LLONG_MAX, counter = 0, noCount = 0;

        for (int j = 0; j < n; j++)
        {
            scanf("%lld %lld", &a[j], &x[j]);
        }

        // -------------Input Part End------------

        for (int j = 0; j < n; j++)
        {
            if (a[j] == 1)
            {
                if (max1 < x[j])
                    max1 = x[j];
            }
            if (a[j] == 2)
            {
                if (min1 > x[j])
                    min1 = x[j];
            }
        }

        for (int j = 0; j < n; j++)
        {
            if (a[j] == 3)
            {
                if (x[j] >= max1 && x[j] <= min1)
                {
                    noCount++;
                }
            }
        }

        if (max1 <= min1)
        {
            counter = min1 - max1 + 1;
            printf("%lld\n", (counter - noCount));
        }
        else
        {
            printf("0\n");
        }
    }

    return 0;
}
