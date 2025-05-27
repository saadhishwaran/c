#include <stdio.h>

int negno(int arr[],int n)
{
    if (arr[n-1]  < 0) {
        return 1 + negno(arr, n-1);
    }
    
    else {
        return negno(arr, n-1);
    }
}

int main()
{
    
    int n;
    printf("enter: ");
    scanf("%d",&n);
    
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int x = negno(arr,n);
    printf("The value is %d", x);
    
    return 0;
}