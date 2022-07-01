#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);cout.tie(NULL);
   
   long long int t;
   cin>>t;
   while(t--)
   {
       long long int h,a;
       cin>>h>>a;
       long long int time=0;
       while(1)
       {
           if(time%2==0)
           {
               h+=3;
               a+=2;
           }
           
           else
           {
               if(a>10)
                {
                    h-=5;
                    a-=10;
                }
                
               else
               {
                   h-=20;
                   a+=5;
               }
           }
           
          if(a>0 && h>0) 
           time++;
           
          else
            break;
       }
       
       cout<<time<<endl;
   }
    
     return 0;
}