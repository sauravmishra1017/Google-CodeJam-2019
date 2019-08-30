#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
ull alpha[26],nums[100];

void factorize(long long n) 
{
    int index=0;
    int count = 0;
    while (!(n%2))
    { 
        n>>= 1;
        count++; 
    }
    for (ull i=3;i<=sqrt(n);i+=2)
    { 
        count=0; 
        while(n%i==0)
        { 
            count++;
            n/=i;
        }
        if(count)
        {
            //cout<<i<<" ";
            if(find(alpha,alpha+25,i)==alpha+25)
                alpha[index++]=i;
        }
    }
    if(n>2)
    {
        //cout<<n<<" ";
        if(find(alpha,alpha+25,n)==alpha+25)
                alpha[index++]=n;
    }
    sort(alpha,alpha+25);
}

ull t,n,l,e,p1,p2,first;

int main()
{
    cin>>t;
    for(ull c=1;c<=t;c++)
    {
        cout<<"Case #"<<c<<": ";
        cin>>n>>l;
        for(ull i=0;i<l;i++)
        {
            cin>>nums[i];
            factorize(nums[i]);
        }
        for(ull j=0;j<26;j++)
        {
            if(nums[0]%alpha[j]==0 && nums[1]%alpha[j]==0)
            {
                p1=alpha[j];
                first=nums[0]/alpha[j];
                cout<<char(65+(find(alpha,alpha+25,first)-alpha+1)%26);
                cout<<char(65+(find(alpha,alpha+25,p1)-alpha+1)%26);
                break;
            }
        }
        for(ull i=1;nums[i]!=0;i++)
        {
            p1=nums[i]/p1;
            cout<<char(65+(find(alpha,alpha+25,p1)-alpha+1)%26);
        }
        cout<<endl;
        for(int i=0;i<100;i++)
            nums[i]=0;
        for(int i=0;i<26;i++)
            alpha[i]=0;
    }
    return 0;
}