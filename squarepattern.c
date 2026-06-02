# include <stdio.h>
int main () {
    int n,i,j;
    printf("enter your number : ");
    scanf ("%d",&n);
    for (i=1;i<=n;i++) {
        char ch = 'A' ;
        for (j=1;j<=n;j++) {
            printf("%c",ch);
            ch=ch+1;
            
        }
    printf("\n");
    }
    return 0;
}