#include <bits/stdc++.h>
typedef unsigned long long int ull;
using namespace std;

ull t,p,q,x,y,inter[100][100],coor[2];

void findMax() 
{
    ull maxElement = INT_MIN;
    for (ull i = 0; i < q; i++) { 
        for (ull j = 0; j < q; j++) { 
            if (inter[i][j] > maxElement) {
                maxElement=inter[i][j];
                coor[0]=i;
                coor[1]=j;
            } 
        } 
    }
    cout<<maxElement;
} 

int main()
{
    char d;
    cin>>t;
    for(ull cases=1;cases<t;cases++)
    {
        cout<<"Case #"<<cases<<": ";
        cin>>p>>q;
        for(ull i=0;i<p;i++)
        {
            cin>>x>>y>>d;
            if(d=='N')
            {
                for(ull j=y+1;i<q;i++)
                {
                    for(ull k=0;k<q;k++)
                        inter[k][j]+=1;
                }
            }
            else if(d=='S')
            {
                for(ull j=y-1;i>=0;i--)
                {
                    for(ull k=0;k<q;k++)
                        inter[k][j]+=1;
                }
            }
            else if(d=='E')
            {
                for(ull j=0;i<q;i++)
                {
                    for(ull k=x+1;k<q;k++)
                        inter[k][j]+=1;
                }
            }
            else if(d=='W')
            {
                for(ull j=0;i<q;i++)
                {
                    for(ull k=x-1;k>=0;k--)
                        inter[k][j]+=1;
                }
            }
        }
        findMax();
        cout<<coor[0]<<" "<<coor[1]<<endl;
    }
}