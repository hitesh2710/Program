#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,mx=0,p1=0,p0=0,p,m=-1;
        cin>>n>>a>>b;
        string s1;vector<int>s;
        cin>>s1;
        
        for(int i=0;i<n;i++)
        { int f=0; 
           while(s1[i]=='1')
           {   f=1;  
               i++;
               if(i==n)
               break;
           }
           if(f!=0)
           {
               s.push_back(1);
               i--;
               
           }
           f=0;
           while(s1[i]=='0')
           {
              f=1; 
              i++;
              if(i==n) 
              break;

           }
           if(f!=0)
           {
               s.push_back(0);
               i--;
               
           }

        }
        
    

        if(b>0)
        {
           mx=(a*n)+(b*n);
           cout<<mx<<"\n";
           continue;
        }
        else
        {
          for(int i=0;i<s.size();i++)
          {
              if(s[i]== 0)
              p0++;
              else
              p1++;
          }
        //  cout<<"&"<<p0<<p1<<"&"<<"\n";
         
          if(p0>=p1)
          { 
            
          mx+=(a*n)+b+b*p1;
          cout<<mx<<"\n";
        }
        else
        {
          
          mx+=(a*n)+b+b*p0;
          cout<<mx<<"\n";
        }
    }
    }
}