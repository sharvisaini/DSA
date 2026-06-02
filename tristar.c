#include <stdio.h>
int main () {
int n,i,j;
char ch = '*';
printf("enter your number :");
scanf("%d",&n);
for (i=0;i<n;i++) {
    for (j=0;j<=(n+i)-n;j++) {
        printf("%c",ch);
    }
printf("\n");
}
return 0;
}