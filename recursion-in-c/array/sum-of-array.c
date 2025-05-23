#include <stdio.h>

int sum(int arr[],int n){
    if (n==0) return 0;
    return arr[n-1]+ sum(arr,n-1);
}

int main(){
    int n;
    printf("enter the length of giving array: ");
    scanf("%d",&n);
    int arr[20];
    printf("enter the value of array: ");
    for (int i=0;i<n;i++)
        scanf("%d", &arr[i]);
    int x = sum(arr, n);
    printf("%d",x);
}