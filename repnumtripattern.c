# include <stdio.h>
int main () {
    int num,n,i,j;
    printf("enter your number : ");
    scanf("%d",&n);
    for (i=1;i<=n;i++) {
        for (j=1;j<=(n+i)-n;j++) {
            num= (n+i)-n;
            printf ("%d""   ",num);
        }
    printf("\n");
    }
return 0;
}