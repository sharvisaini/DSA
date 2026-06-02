#include <stdio.h>
int main () {
int n,i,j,num=1;
printf ("enter your number : ");
scanf ("%d",&n);
for (i=1;i<=n;i++) {
    for (j=1;j<=n;j++) {
        printf("%d",num);
        num=num+1;
    }
printf("\n");
}
return 0;
}