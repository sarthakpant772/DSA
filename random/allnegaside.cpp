#include<iostream>
#include<array>
#include<bits/stdc++.h>
#define forn(i,n) for(int i=0;i<n;++i)
using namespace std;

int main(){
    int a[]={ -12, 11, -13, -5, 6, -7, 5, -3, -6};
    int i=0,j=0;

    while(i<9){
        if(a[i]<0){
            swap(a[i],a[j]);
            j++;
        }
        i++;
    }

    forn(i,9){
        cout<<a[i]<<" ";
    }
}