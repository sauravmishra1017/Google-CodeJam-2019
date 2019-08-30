#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int t,r,c,rc,rcs,count,rpos1,cpos1,cpos2,rprev,cprev,flag;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		flag=0;
		cout<<"Case #"<<i<<": ";
		cin>>r>>c;
		rcs=r*c;
		count=1;
		rc=1;
		rprev=rpos1=r;
		cprev=cpos1=3;
		cpos2=1;
		while(count<r*c)
		{
			if(rc%r==0)
			{
				rc=r;
				cpos1++;cpos2++;
			}
			else
				rc%=r;
			if(rc%2!=0)
			{
				if(rc==rprev || cpos2==rprev || (rc-cpos2)==(rprev-cprev) || (rc+cpos2)==(rprev+cprev))
				{
					flag=1;
					break;
				}
				else
				{
					rprev=rc;
					cprev=cpos2;
				}
			}
			else
			{
				if(rc==rprev || cpos1==rprev || (rc-cpos1)==(rprev-cprev) || (rc+cpos1)==(rprev+cprev))
				{
					flag=1;
					break;
				}
				else
				{
					rprev=rc;
					cprev=cpos1;
				}
			}
			if(cpos1>c)
				cpos1=1;
			if(cpos2>c)
				cpos2=1;
			rc++;
			count++;
		}
		if(flag==1)
			cout<<"IMPOSSIBLE"<<endl;
		else
		{
			count=1;
			rc=1;
			rprev=rpos1=r;
			cprev=cpos1=3;
			cpos2=1;
			cout<<"POSSIBLE"<<endl;
			cout<<rpos1<<" "<<cpos1++<<endl;
			while(count<r*c)
			{
				if(rc%r==0)
				{
					rc=r;
					cpos1++;cpos2++;
				}
				else
					rc%=r;
				if(rc%2!=0)
					cout<<r-rc<<" "<<cpos2<<endl;
				else
					cout<<rc<<" "<<cpos1<<endl;
				if(cpos1>c)
					cpos1=1;
				if(cpos2>c)
					cpos2=1;
				rc++;
				count++;
			}	
		}
	}
	return 0;
}