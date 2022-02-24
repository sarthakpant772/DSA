#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void combine(int arr[],int l,int mid,int r){
    int temp[l-r+1];
    int i=l,j=mid+1,k=0;

    while(i<=mid && j<=r){
        
        if(arr[i]<=arr[j]){
            temp[k]=arr[i];
            k++;
            i++;
        }
        else{
            temp[k]=arr[j];
            k++;
            j++;
        }
    }

    while(i<=mid){
        temp[k]=arr[i];
        k++;
        i++;
    }

    while(j<=r){
        temp[k]=arr[k];
        k++;
        j++;
    }
}

void merge(int arr[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        merge(arr,l,mid);
        merge(arr,mid+1,r);

        combine(arr,l,mid,r);
    }
}