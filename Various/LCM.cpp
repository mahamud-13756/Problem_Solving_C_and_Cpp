//LCM
#include<bits/stdc++.h>
using namespace std;

void LCM(int *, int);

int main()
{

    int total_number,*p;
    cout<<"Enter the number, How many number you given for 'LCM' : ";
    cin>>total_number;
    int a[total_number];
    for(int i=0; i<total_number; i++)
    {
        cin>>a[i];
    }
    p=&a[0];
    LCM(p,total_number);

}



void LCM(int *q, int size)
{
    int sz,store,c=0,d=0;

    vector<int> vc;
    for(int i=0; i<size; i++)
    {
        int value=*(q+i);
        vc.push_back(value);
    }
    //----------Input Part End------------

    for (int i=0; i<vc.size(); i++)
    {
        cout << vc[i] << " ";
    }
    cout << "\n";
    std::sort(vc.begin(), vc.end());

    // Erase duplicates using unique idiom
    vc.erase(std::unique(vc.begin(), vc.end()), vc.end());

    cout << "After Sorting\n";
    sz=vc.size();
    cout<<"After remove multiple value: "<<sz<<"\n"<<"Actual size: "<<size<<"\n";
    for (int i=0; i<sz; i++)
    {
        cout << vc[i] << " ";
    }
    cout<<"\n";

//------------Printing----------


    for(int k=0; k<(30) ; k++)
    {
        store=vc[sz-1]*(k+1);
        for(int j=0; j<sz; j++)
        {
            if(store%vc[j]==0)
            {
                c++;
                if(c==(sz-1))
                {
                    cout<<"LCM is: "<<store<<"\n"; d++;
                }

                else break;

            }

        }
        c=0;
        if(d!=0) break;


    }
    //return store;
}
