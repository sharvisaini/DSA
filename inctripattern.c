#include <stdio.h>
int main () {
    int n,i,j,num;
    printf("enter your number : ");
    scanf ("%d",&n);
    num=1;
    for (i=1;i<=n;i++){
        for (j=0;j<(n+i)-n;j++) {
            printf("%d  ",num);
            num=num+1;
        }
    printf("\n");
    }
return 0;
}