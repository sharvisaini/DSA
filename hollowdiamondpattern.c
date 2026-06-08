#include <stdio.h>
int main () {
    int i,n,j,k;
    printf("enter your number: ");
    scanf("%d", &n);
    for (i=1;i<=n;i++) { 
        for (k=0;k<(n-i);k++) {
                printf(" ");
            }       
        if (i==1) {
            printf("*");
            
        } else {
            printf("*");
        }

        for (k=i;k<(i-2);k++) {
                printf("     ");
            }       
        if (i==1) {
            printf("*");
            
        } else {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}