#include <stdio.h>
int fiban(int x){
    if (x == 0 ) return 0;
    if (x == 1) return 1;
    
}
int main(){
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    int x = fiban(n);
    printf("%d",x);
}