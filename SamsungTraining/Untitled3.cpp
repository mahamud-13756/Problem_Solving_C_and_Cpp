#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,k,c=0;
    cin>>n>>k;

    int arr[n];

    for(int i=0;i<n; i++){
        cin>>arr[i];
        if(arr[i]==0) c++;
    }

    if((c<=k && (k-c)%2==0)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


    return 0;
}

/*int n, count=0;
   cin>>n;
   // n er moddhe joto 1 thakbe totobar loop cholbe
   while(n){
    n=n&(n-1);
    count++;
   }
   cout<<count;



public:
    int missingNumber(vector<int>& nums){
    int N = nums.size();
    int sum1=0,sum2=0;
    for(int i=0; i<N; i++){
        sum1+=nums[i];
        sum2+=i+1;
    }
   cout<<sum1<<" "<<sum2;
   int s= sum2-sum1;
   cout<<s;
    }




// d to Hex
 int n,i;
    cin>>n;
    for(i=28; i>0; i-=4)
        if((n>>i)&15)
            break;
    for(; i>=0; i-=4){
        int digit=(n>>i)&15;
        if(digit<10)
            printf("%d", digit);
        else
            printf("%c", digit+55);
    }

    */
