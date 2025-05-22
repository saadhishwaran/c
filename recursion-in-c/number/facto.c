#include <stdio.h>
int facto(int x){
    if (x == 0) return 1;
    if (x == 1) return 1;
    return x * facto(x-1);  
}

int main(){
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    int x = facto(n);
    printf("%d",x);
}