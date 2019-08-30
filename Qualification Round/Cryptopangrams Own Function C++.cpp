#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;

ull alpha[50],nums[101],t,ntemp,l,p1,p2,first;
int pos,lrange,rrange;

int uniqueinalpha(ull x)
{
    for(int i=0;alpha[i]!=0;i++)
    {
        if(alpha[i]==x)
            return i;
    }
    return -1;
}

void primeFactors(int n) 
{
    if(n%2==0)
    {
        if(uniqueinalpha(2)==-1 && ntemp<=ntemp)
            alpha[pos++]=2;
    }
    while(n%2==0)
        n/=2;
    for (unsigned int i = 3; i <= sqrt(n); i = i+2) 
    {
        if(n%i==0)
        {
            if(uniqueinalpha(i)==-1 && ntemp<=ntemp)
                alpha[pos++]=i;
        }
        while (n%i == 0)
            n = n/i;
    }
    if (n > 2) 
    {
        if(uniqueinalpha(n)==-1 && ntemp<=ntemp)
            alpha[pos++]=n;
    }
}


int main()
{
    scanf("%llu",&t);
    for(unsigned int i=1;i<=t;i++)
    {
        pos=0;
        scanf("%llu",&ntemp);
        scanf("%llu",&l);
        cout<<"Case #"<<i<<": ";
        for(unsigned int j=0;j<l;j++)
        {
            scanf("%llu",&nums[j]);
            primeFactors(nums[j]);
        }
        
        for(rrange=0;alpha[rrange]!=0;rrange++);
        for(lrange=0;alpha[lrange]==0;rrange++);
        
        sort(alpha+lrange,alpha+rrange);
        
        //for(unsigned int j=0;j<rrange;j++)
        //    cout<<alpha[j]<<" ";
        
        for(int j=lrange;alpha[j]!=0;j++)
        {
            if(nums[0]%alpha[j]==0 && nums[1]%alpha[j]==0)
            {
                p1=alpha[j];
                first=nums[0]/p1;
                printf("%c",65+uniqueinalpha(first));
                printf("%c",65+uniqueinalpha(p1));
                break;
            }
        }
        for(int j=1;nums[j]!=0;j++)
        {
            p1=nums[j]/p1;
            printf("%c",65+uniqueinalpha(p1));
        }
        cout<<endl;
        for(int j=0;j<rrange;j++)
            alpha[j]=0;
        for(int j=0;nums[j]!=0;j++)
            nums[j]=0;
    }
}