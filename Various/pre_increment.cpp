#include<bits/stdc++.h>
using namespace std;

int main()
{
    //int A=5, B=7, C=4, D=8, E=9;
//cout<< A +(A * B / C % D++ + A | B) ;
int a=0, b;
// a= b++ + b++;
// cout<<a;
// cout<<b;
//return 0;
// b) B *= (A / B) >= C + D + E++ - E
// c) A += A && B & C || D | E + 7    // A=2
//d) A *= A++ + ++A * B / C % D       // A++  == A+=1 == A=A+1
//int a= A+(A * B / C % D++ + A | B);
 b= ++a + ++a - ++a + a++;
cout<<b;
cout<<"\n"<<a;
//        1      2     3    3
//cout<<b;
//cout<<++A * B / C % D;
//cout<<A*(A++ + 2);
}