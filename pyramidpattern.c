#include <Stdio.h>
int main () {
    int i,n,j,k;
    printf("enter your number :  ");
    scanf("%d",&n);
    for (i=1;i<=n;i++) {
        for (k=0;k<=(n-i)-1;k++) {
            printf(" ");
        }
        for (j=1;j<=(n+i)-n;j++) {
             printf(" ");
            printf("%d",j);
           
        }
         for (j=i-1; j>=1; j--) {
             printf(" ");
            printf("%d",j);
        }

    printf("\n");
    }


    return 0;
}