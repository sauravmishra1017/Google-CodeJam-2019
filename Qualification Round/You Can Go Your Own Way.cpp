#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
ull t,n,cs,ce,loop;
string p;
int main()
{
    int testcount=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cout<<"Case #"<<i+1<<": ";
        cs=ce=0;
        cin>>n;
        cin>>p;
        loop=2*n-2;
        for(ull j=0; j<loop;j++)
        {
            if(cs!=n && ce!=n)
            {
                if(p[j]=='E')
                {
                    cout<<"S";
                    cs++;
                }
                else//(p[j]=='S')
                {
                    cout<<'E';
                    ce++;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}