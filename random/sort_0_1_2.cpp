// { Driver Code Starts
//Initial Template for C
// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

void sort012(int a[], int n)
{
    int arr[]={0,0,0};
    for(int i=0;i<n;++i){
        arr[a[i]]++;
    }
    int k=0;
    for(int i=0;i<3;++i){
        while(arr[i]--){
            a[k]=i;
            k++;
        }
    }
}

// { Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
  // } Driver Code Ends