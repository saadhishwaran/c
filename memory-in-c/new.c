#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr;
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    arr = (int *)malloc(n * sizeof(int));
    printf("enter the values: ");
    for (int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 0;i<n;i++){printf(" the values are: %d",arr[i]);}
    free(arr);
    printf("%d",arr);
    return 0;
}