//https://codeforces.com/contest/1921/problem/D
//submitted 1100
#include<bits/stdc++.h>
using namespace std;

/////////////////////////////////////////////////////////////////
#define ll                  long long int
#define ull                 unsigned long long

#define max(a, b) (((a) > (b)) ? (a) : (b))
#define min(a, b) (((a) > (b)) ? (b) : (a))
#define abs(a) (((a) > 0) ? (a) : (-(a)))

/////////////////////////////////////////////////////////////////



int main()
{
    int t,an,am,mxf,mxl,ad=0,ad1=0;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        vector<int> vcn;
        vector<int> vcm;
        for(int i=0; i<n; i++)
        {
            cin>>an;
            vcn.push_back(an);
        }
        for(int i=0; i<m; i++)
        {
            cin>>am;
            vcm.push_back(am);
        }


        sort(vcn.begin(), vcn.end());//Ascending order sort.

        sort(vcm.begin(), vcm.end()); // ascending order sort.

        reverse(vcm.begin(), vcm.end());//descending order sort
        ll ad=0;
        int j=0,k=0,c=0;
        for(int i=0; i<n; i++)
        {

            if(abs(vcn[j]-vcm[k]) >= abs(vcn[vcn.size()-1] - vcm[vcm.size()-1])){

                ad+=abs(vcn[j]-vcm[k]);

                j++;
                k++;
            }
            else{
                ad+=abs(vcn[vcn.size()-1] - vcm[vcm.size()-1]);
                vcn.pop_back();
                vcm.pop_back();

            }

        }
        cout<<ad <<"\n";
        ad=0;





    }


    return 0;
}





















////Rating 1100
////https://codeforces.com/problemset/problem/1921/D
//#include<bits/stdc++.h>
//using namespace std;
//
//void descending(long long int *, int);
//void ascending(long long int *, int);
//void compared(long long int *, long long int *,int);
//
//int main()
//{
//    int t,D=0;+/
//    scanf("%d",&t);
//
//    for(int i=0; i<t; i++){
//        int n,m;
//        scanf("%d %d",&n,&m);
//        long long int a[n],b[m],*an,*bm;
//        an = a;
//        bm = &b[0];
//
//        for(int j=0; j<n; j++){
//            scanf("%lld",(an+j));
//        }
//        for(int k=0; k<m; k++){
//            scanf("%lld",(bm+k));
//        }
//        //--------End input line--------
//
//        descending(an,n);
//        for(int z=0; z<n; z++)
//            printf("%lld",*(an+z));
//        printf("\n\n");
//        //ascending(bm,m);
//
//
//
//        for(int l=0; l<n; l++){
//            D = D + abs(a[l]-b[l]);
//        }
//        printf("%d\n",D);
//
//
//
//
//
//
//    }
//}
//
//
//void descending(long long int *p, int n)
//{
//    int s;
//    for(int i=0; i<n-1; i++){
//        for(int j=0; j<n-1; j++){
//            if(*(p+j) > *(p+j+1)){
//
//            }
//            else{
//                s=*(p+j);
//                *(p+j)=*(p+j+1);
//                *(p+j+1)=s;
//            }
//
//        }
//    }
//
//
//}
//
//void ascending(long long int *q, int m)
//{
//    int s;
//    for(int i=0; i<m-1; i++){
//        for(int j=0; j<m-1; j++){
//            if(*(q+j) < *(q+j+1)){
//
//            }
//            else{
//                s=*(q+j);
//                *(q+j)=*(q+j+1);
//                *(q+j+1)=s;
//            }
//
//
//        }
//    }
//
//
//
//}
//
//void compared(long long int *xn, long long int *xm,int size_n)
//{
//
//    for(int i=0; i<size_n; i++){
//        for(int j=0; j<size_n; j++){
//            s = abs(xn[i] - xm[j]);
//            if(s)
//
//
//        }
//
//    }
//}


