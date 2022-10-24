//https://codeforces.com/problemset/problem/466/A

#include<bits/stdc++.h>
using namespace std;
void conversion(int counts)
{
  std::ostringstream ss;
  ss << std::fixed << counts;
  std::cout << ss.str();
}
int main()
{
    long long int n,m,a,b;
    double s,t;
    cin>>n>>m>>a>>b;

    s=((double)n/m);
    t=ceil(s*(double)b);
    conversion(t);

    return 0;
}
