#include<bits/stdc++.h>
using namespace std;
 int i = 0, j = 0, even[1000], odd[1000];
void fun(int a, int b)
{
   
    if (a <= b) {
        if (a % 2 == 0) {  // Use modulo to check if a is even
            even[i] = a;
            ++i;
            a += 1;
            fun(a, b);
        }
        else {
            odd[j] = a;
            ++j;
            a += 1;
            fun(a, b);
        }
    }else{
              
    cout << "number of even number is : " << i << endl;
    for (int k = 0; k < i; ++k) cout << even[k] << " ";  // Fix the loop variable here
    cout << "\nnumber of odd number is : " << j << endl;
    for (int k = 0; k < j; ++k) cout << odd[k] << " ";  // Fix the loop variable here
    
    }
         
    
}

int main()
{
    int a, b; cin >> a >> b;
    fun(a, b);
    
    return 0;
}
