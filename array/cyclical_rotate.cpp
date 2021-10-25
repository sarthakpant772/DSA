// { Driver Code Starts
#include <stdio.h>

void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
        return 0;
}
// } Driver Code Ends


void rotate(int a[], int n)
{   
    int next=a[0];
    int curr=a[0];
    for(int i=0;i<n-1;++i){
        
       next=a[i+1];
       a[i+1]=curr;
       curr=next;
    }
    a[0]=next;
}