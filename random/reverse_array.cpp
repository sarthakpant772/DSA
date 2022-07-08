#include<iostream>
#include<array>
#include<bits/stdc++.h>
#define forn(i,n) for(int i=0;i<n;++i)
using namespace std;

int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int i=0,j=9;

    while(i<=j){
        swap(a[i],a[j]);
        j--;
        i++;
    }

    forn(i,10){
        cout<<a[i]<<" ";
    }
}