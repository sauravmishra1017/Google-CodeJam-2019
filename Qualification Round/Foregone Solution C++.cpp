#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;

string str1,str2;
ull t,n,i,j;

int main()
{
    cin>>t;
    for(ull i=0;i<t;i++)
    {
        cout<<"Case #"<<i+1<<": ";
        cin>>n;
        str2=str1=to_string(n);        
        for(j=0;j<str1.size();j++)
        {
            if(str1[j]=='4')
            {
                str1[j]='3';
                str2[j]='1';
            }
            else
                str2[j]='0';
        }
        cout<<stoi(str1)<<" "<<stoi(str2)<<endl;
    }
    return 0;
}