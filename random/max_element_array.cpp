#include<iostream>
#include<array>
#include<bits/stdc++.h>
#define forn(i,n) for(int i=0;i<n;++i)
using namespace std;
struct pairs{
    int min;
    int max;
};

struct pairs getminmax(int a[],int n){
    struct pairs minmax;
    int i;

    if(n%2){
        minmax.min=a[0];
        minmax.max=a[0];
        i=1;
    }
    else{
        if(a[0]>a[1]){
            minmax.max=a[0];
            minmax.min=a[1];
        }
        else{
            minmax.max=a[1];
            minmax.min=a[0];

        }
        i=2;
    }

    while(i<n-1){

        if(a[i]>a[i+1]){
            if(a[i]>minmax.max){
                minmax.max=a[i];
            }

            if(a[i+1]<minmax.min){
                minmax.min=a[i+1];
            }
        }
        else{
            if(a[i]<minmax.min){
                minmax.min=a[i];
            }

            if(a[i+1]>minmax.max){
                minmax.max=a[i+1];
            }
        }
        i+=2;
    }
    return minmax;
}

int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int i=0,j=9;
    struct pairs minmax;
    minmax=getminmax(a,10);
    cout<<minmax.min<<" "<<minmax.max;
    return 0;
}