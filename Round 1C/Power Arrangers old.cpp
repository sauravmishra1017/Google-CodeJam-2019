#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,f;
    char toys[19],toyseq[5];
    int ccount[]={0,0,0,0,0},finalflag=0;
    cin>>t>>f;
    while(t--)
    {
        for(int i=1;i<16;i+=3)
        {
            cout<<i<<endl;
            cin>>toys[i];
        }
        for(int i=1;i<16;i+=3)
        {
            if(toys[i]=='A')
                ccount[0]++;
            if(toys[i]=='B')
                ccount[1]++;
            if(toys[i]=='C')
                ccount[2]++;
        }
        for(int i=0;i<3;i++)
        {
            if(ccount[i]==1)
            {
                if(i==0) toyseq[0]='A';
                if(i==1) toyseq[0]='B';
                if(i==2) toyseq[0]='C';
            }
        }
        for(int i=1;i<16;i+=3)
        {
            if(toys[i]==toyseq[0])
            {
                cout<<i+1<<endl;
                cin>>toys[i+1];
            }
        }
        for(int i=0;i<5;i++)
            ccount[i]=0;
        for(int i=1;i<16;i+=3)
        {
            if(toys[i]==toyseq[0])
            {
                if(toys[i+1]=='A')
                    ccount[0]++;
                if(toys[i+1]=='B')
                    ccount[1]++;
                if(toys[i+1]=='C')
                    ccount[2]++;
            }
        }
        for(int i=0;i<3;i++)
        {
            if(ccount[i]==0)
            {
                if(i==0 && toyseq[0]!='A') toyseq[1]='A';
                if(i==1 && toyseq[0]!='B') toyseq[1]='B';
                if(i==2 && toyseq[0]!='C') toyseq[1]='C';
            }
        }
        for(int i=1;i<16;i+=3)
        {
            if(toys[i]==toyseq[0] && toys[i+1]==toyseq[1])
                finalflag=1;
        }
        if(finalflag==0)
        {
            cout<<toyseq;
            if((toyseq[0]=='A' && toyseq[1]=='B') || (toyseq[0]=='B' && toyseq[1]=='A'))
                cout<<'C';
            if((toyseq[0]=='C' && toyseq[1]=='A') || (toyseq[0]=='A' && toyseq[1]=='C'))
                cout<<'B';
            else
                cout<<'A';
        }
        else
        {
            cout<<toyseq[0];
            if((toyseq[0]=='A' && toyseq[1]=='B') || (toyseq[0]=='B' && toyseq[1]=='A'))
                cout<<'C';
            if((toyseq[0]=='C' && toyseq[1]=='A') || (toyseq[0]=='A' && toyseq[1]=='C'))
                cout<<'B';
            else
                cout<<'A';
            cout<<toyseq[1];
        }
    }
    return 0;
}
