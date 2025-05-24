#include <stdio.h>

int fiban(int x){
    if (x==0) return 0;
    if (x==1) return 1;
    return fiban(x-1) + fiban(x-2);
}

int main(){
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        printf("%d ", fiban(i));
}