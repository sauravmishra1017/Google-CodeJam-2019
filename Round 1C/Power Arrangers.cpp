#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,f;
    char toys[600],toyseq[5];
    int ccount[]={0,0,0,0,0},finalflag=0;
    cin>>t>>f;
    while(t--)
    {
        finalflag=0;
        for(int i=1;i<596;i+=5)
        {
            cout<<i<<endl;
            fflush(stdout);
            cin>>toys[i];
        }
        for(int i=1;i<596;i+=5)
        {
            if(toys[i]=='A')
                ccount[0]++;
            if(toys[i]=='B')
                ccount[1]++;
            if(toys[i]=='C')
                ccount[2]++;
            if(toys[i]=='D')
                ccount[3]++;
            if(toys[i]=='E')
                ccount[4]++;
        }
        for(int i=0;i<5;i++)
        {
            if(ccount[i]==23)
            {
                if(i==0) toyseq[0]='A';
                if(i==1) toyseq[0]='B';
                if(i==2) toyseq[0]='C';
                if(i==3) toyseq[0]='D';
                if(i==4) toyseq[0]='E';
            }
        }
        for(int i=1;i<596;i+=5)
        {
            if(toys[i]==toyseq[0])
            {
                cout<<i+1<<endl;
                fflush(stdout);
                cin>>toys[i+1];
            }
        }
        
        for(int i=0;i<5;i++)
            ccount[i]=0;
            
        for(int i=1;i<596;i+=5)
        {
            if(toys[i]==toyseq[0])
            {
                if(toys[i+1]=='A')
                    ccount[0]++;
                if(toys[i+1]=='B')
                    ccount[1]++;
                if(toys[i+1]=='C')
                    ccount[2]++;
                if(toys[i+1]=='D')
                    ccount[3]++;
                if(toys[i+1]=='E')
                    ccount[4]++;
            }
        }
        for(int i=0;i<5;i++)
        {
            if(ccount[i]==5)
            {
                if(i==0 && toyseq[0]!='A') toyseq[1]='A';
                if(i==1 && toyseq[0]!='B') toyseq[1]='B';
                if(i==2 && toyseq[0]!='C') toyseq[1]='C';
                if(i==3 && toyseq[0]!='D') toyseq[1]='D';
                if(i==4 && toyseq[0]!='E') toyseq[1]='E';
            }
        }
        
        for(int i=1;i<596;i+=5)
        {
            if(toys[i]==toyseq[0] && toys[i+1]==toyseq[1])
            {
                cout<<i+2<<endl;
                fflush(stdout);
                cin>>toys[i+2];
            }
        }
        
        for(int i=0;i<5;i++)
            ccount[i]=0;
        
        for(int i=1;i<596;i+=5)
        {
            if(toys[i]==toyseq[0] && toys[i+1]==toyseq[1])
            {
                if(toys[i+2]=='A')
                    ccount[0]++;
                if(toys[i+2]=='B')
                    ccount[1]++;
                if(toys[i+2]=='C')
                    ccount[2]++;
                if(toys[i+2]=='D')
                    ccount[3]++;
                if(toys[i+2]=='E')
                    ccount[4]++;
            }
        }
        
        for(int i=0;i<5;i++)
        {
            if(ccount[i]==1)
            {
                if(i==0 && toyseq[0]!='A' && toyseq[1]!='A') toyseq[2]='A';
                if(i==1 && toyseq[0]!='B' && toyseq[1]!='B') toyseq[2]='B';
                if(i==2 && toyseq[0]!='C' && toyseq[1]!='C') toyseq[2]='C';
                if(i==3 && toyseq[0]!='D' && toyseq[1]!='D') toyseq[2]='D';
                if(i==4 && toyseq[0]!='E' && toyseq[1]!='E') toyseq[2]='E';
            }
        }
        
        for(int i=1;i<596;i+=5)
        {
            if(toys[i]==toyseq[0] && toys[i+1]==toyseq[1] && toys[i+2]==toyseq[2])
            {
                cout<<i+3<<endl;
                fflush(stdout);
                cin>>toys[i+3];
            }
        }
        
        for(int i=0;i<5;i++)
            ccount[i]=0;
        
        for(int i=1;i<596;i+=5)
        {
            if(toys[i]==toyseq[0] && toys[i+1]==toyseq[1] && toys[i+2]==toyseq[2])
            {
                if(toys[i+3]=='A')
                    ccount[0]++;
                if(toys[i+3]=='B')
                    ccount[1]++;
                if(toys[i+3]=='C')
                    ccount[2]++;
                if(toys[i+3]=='D')
                    ccount[3]++;
                if(toys[i+3]=='E')
                    ccount[4]++;
            }
        }
        
        for(int i=0;i<5;i++)
        {
            if(ccount[i]==0)
            {
                if(i==0 && toyseq[0]!='A' && toyseq[1]!='A' && toyseq[2]!='A') toyseq[3]='A';
                if(i==1 && toyseq[0]!='B' && toyseq[1]!='B' && toyseq[2]!='B') toyseq[3]='B';
                if(i==2 && toyseq[0]!='C' && toyseq[1]!='C' && toyseq[2]!='C') toyseq[3]='C';
                if(i==3 && toyseq[0]!='D' && toyseq[1]!='D' && toyseq[2]!='D') toyseq[3]='D';
                if(i==4 && toyseq[0]!='E' && toyseq[1]!='E' && toyseq[2]!='E') toyseq[3]='E';
            }
        }
        
        for(int i=1;i<596;i+=5)
        {
            if(toys[i]==toyseq[0] && toys[i+1]==toyseq[1] && toys[i+2]==toyseq[2] && toys[i+3]==toyseq[3])
                finalflag=1;
        }
        
        if(finalflag==0)
        {
            cout<<toyseq;
            int toyval[]={0,0,0,0,0},charval;
            char temp;
            for(int j=0;j<4;j++)
            {
                if(toyseq[j]=='A')
                    toyval[0]=1;
                if(toyseq[j]=='B')
                    toyval[1]=1;
                if(toyseq[j]=='C')
                    toyval[2]=1;
                if(toyseq[j]=='D')
                    toyval[3]=1;
                if(toyseq[j]=='E')
                    toyval[4]=1;
            }
            for(int j=0;j<5;j++)
            {
                if(toyval[j]==0)
                {
                    charval=j;
                    break;
                }
            }
            if(charval==0)
                cout<<'A';
            if(charval==1)
                cout<<'B';
            if(charval==2)
                cout<<'C';
            if(charval==3)
                cout<<'D';
            if(charval==4)
                cout<<'E';
        }
        else
        {
            cout<<toyseq[0]<<toyseq[1]<<toyseq[2];
            int toyval[]={0,0,0,0,0},charval;
            char temp;
            for(int j=0;j<4;j++)
            {
                if(toyseq[j]=='A')
                    toyval[0]=1;
                if(toyseq[j]=='B')
                    toyval[1]=1;
                if(toyseq[j]=='C')
                    toyval[2]=1;
                if(toyseq[j]=='D')
                    toyval[3]=1;
                if(toyseq[j]=='E')
                    toyval[4]=1;
            }
            for(int j=0;j<5;j++)
            {
                if(toyval[j]==0)
                {
                    charval=j;
                    break;
                }
            }
            if(charval==0)
                cout<<'A';
            if(charval==1)
                cout<<'B';
            if(charval==2)
                cout<<'C';
            if(charval==3)
                cout<<'D';
            if(charval==4)
                cout<<'E';
            cout<<toyseq[4];
        }
        fflush(stdout);
        
		char verdict;
		cin>>verdict;
		if(verdict=='N')
			exit(0);
    }
    return 0;
}