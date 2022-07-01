#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
   
   while(1)
   {
       long long int n;
       cin>>n;
       if(n==0)
          break;
          
       long long int a[n],i;
       for(i=0;i<n;++i) 
           cin>>a[i];
           
       long long int sell=0,buy=0;
       long long int cost=0;
       
      while(1)
      {
       while(sell<n && a[sell]>=0)
             sell++;
             
       while(buy<n && a[buy]<=0) 
              buy++;
       
       if(sell==n || buy==n) 
          break;
          
       long long int wine_sold=min(a[buy],-a[sell]);
       cost+=wine_sold*abs(sell-buy);
       a[buy]-=wine_sold;
       a[sell]+=wine_sold;
       
      }
       
       cout<<cost<<endl;
   }
    
     return 0;
}