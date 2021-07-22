#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{ 
    int n,q,s1=0;
    int a[n]={0};      //0 represents tail
    for(int i=0;i<n;i++)
    cin>>a[i];
    while(q--)
    {
        string s;
        cin>>s;
        if(s[0]=='0')
        {
           for(int i=s[1];i<=s[2];i++)
           {
               if(a[i]=='0')
               {
                a[i]=1;
                s1+=1;
               }
               else
               {
               a[i]=0;
               s1-=1;
               }
           }
        }
        else
        {
            cout<<s1<<"\n";
        }
    }
}