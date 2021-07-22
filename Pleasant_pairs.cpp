#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        vector<pair<int,int>>p;
        for(int i=1;i<=n;i++)
        {
          cin>>x;
          p.push_back(make_pair(x,i));
        }
        sort(p.begin(),p.end());
    int tt=0;
    for(int i=0;i<n;i++)
    {
        if(p[i].first!=-1)
        {
          for(int j=i+1;j<n;j++)
          {
              if((p[j].first)*(p[i].first)==(p[j].second)*(p[j].second))
              {
                  tt++;
                  (p[j].first)=-1;
                  (p[i].first)=-1;
              }
          }
        }
    }
    cout<<tt;
    }
}