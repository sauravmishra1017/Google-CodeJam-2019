#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,flag=0,flags=0,pos,k,l;
    char n[1000],attack,attack_prev;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Case #"<<i<<": ";
        cin>>a;
        flag=0;
        cin>>n;
        if(n[0]=='R')
            attack='P';
        else if(n[0]=='P')
            attack='S';
        else
            attack='R';
        attack_prev=attack;
        for(int j=1;j<a;j++)
        {
            cin>>n;
            if(n[0]=='R')
                attack='P';
            else if(n[0]=='P')
                attack='S';
            else
                attack='R';
            if(attack_prev!=attack)
                flag=1;
            attack_prev=attack;
        }
        if(flag==1)
            cout<<"IMPOSSIBLE"<<endl;
        else
            cout<<attack<<endl;
    }
    return 0;
}