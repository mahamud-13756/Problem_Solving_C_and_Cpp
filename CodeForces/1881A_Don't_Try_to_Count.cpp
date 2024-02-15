//https://codeforces.com/problemset/problem/1881/A
//submitted 800
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    string x,s;
    cin>>n>>m>>x>>s;
    int ct=0;
    for(int i=0; i<=10; ++i)
    {
        if(x.find(s) != string::npos)
        {
            cout<<i<<"\n";
            return;
        }
        x=x+x;
    }
    cout<<-1<<"\n";
}

int main()
{

    int tc;
    cin >> tc;
    while (tc--) solve();
}



/*
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        int m; cin>>m;
        string x,s; cin>>x>>s;
        size_t f,f1,f2;

        if(n<m){
            for(int i=0; i<m; ++i){
                x=x+x;
                //x.append(x);
                if(x.size()>=m){
                    f=x.find(s);
//                    int cnt=0;
//                    cnt++;
                    if (f != std::string::npos){
                        cout<<i+1<<endl;
                        break;
                    }
//                    if(cnt==2) break;
//                    else{
//                        continue;
//                    }
                }
            }
            if (f == std::string::npos) cout<<"-1\n";

        }
        else{

            f1=x.find(s);
            if (f1 != std::string::npos) cout<<"0\n";
            else{
                x=x+x;
                //x.append(x);
                f2=x.find(s);
                if (f2 != std::string::npos) cout<<"1\n";
                else{
                    cout<<"-1\n";
                }
            }

        }


    }
    return 0;
}
*/
