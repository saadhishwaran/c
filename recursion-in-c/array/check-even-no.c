#include <stdio.h>

int evenno(int arr[],int a)
{
    if (arr[a-1] % 2 == 0) {
        return 1 + evenno(arr, a-1);
    }
    
    else {
        return evenno(arr, a-1);
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
    
    int x = evenno(arr,n);
    printf("The value is %d", x);
    
    return 0;
}