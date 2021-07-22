#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    { 
        int n,m;
        cin>>n>>m;
        int t[n][m]={0},t1[n-1][m]={0};
        string s;string cc;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            for(int j=0;j<m;j++)
            {
                t[i][j]=s[j];
            }
             
        }
         for(int i=0;i<n-1;i++)
        {
            cin>>s;
            for(int j=0;j<m;j++)
            {
                t1[i][j]=s[j];
            }
             
        }
        
        // for(int i=0;i<n;i++)
        // {
        
        //     for(int j=0;j<m;j++)
        //     cout<<t[i][j]<<" ";
        //     cout<<"\n";
        // }
        // for(int i=0;i<n-1;i++)
        // {
        
        //     for(int j=0;j<m;j++)
        //     cout<<t1[i][j]<<" ";
        //     cout<<"\n";
        // }
        
        
        
        
        
        for(int i=0;i<m;i++)
        {  int s1=0,s2=0;
           for(int j=0;j<n;j++)
           {
               s1+=t[j][i];
               if(j!=n-1)
               s2+=t1[j][i];
           }
           char c=s1-s2;
           cc+=c;
           
        }
        cout<<cc<<endl;
        
        
         
    }
}