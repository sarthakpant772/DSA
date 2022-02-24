#include<iostream>
#include<vector>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

int partistion (int arr[], int low, int high) 
{ 
    int pivot = arr[high]; 
    int i = (low - 1); 
  
    for (int j = low; j <= high - 1; j++) 
    { 
        
        if (arr[j] < pivot) 
        { 
            i++; 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 


void quick(int arr[],int l,int r){
    if(l<r){
        int pi=partistion(arr,l,r);
        quick(arr,l,pi-1);
        quick(arr,pi,r);
    }
}