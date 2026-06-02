#include <stdio.h>
int main () {
    int i,n,j,k,num;
    printf("enter your number :  ");
    scanf("%d",&n);
    for (i=1;i<=n;i++) {
        for (k=0;k<i;k++) {
            char ch = ' ';
            printf ("%c",ch);
        }
        for (j=1;j<=(n-i)+1;j++) {
            num=(n+i)-n;
            printf ("%d",num);
        }
    printf("\n");
        }
    return 0;
    }
