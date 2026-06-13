#include <Stdio.h> 
int fibonnaciseries(int n) {
    int i,j,c;
    int a=1,b=0;
    for(i=0;i<=n-1;i++) {
        if (i<1) {
            printf("%d",i);
        }
        else {
            c=a+b;
            printf("%d",c);
            a=b;
            b=c;
        }
    printf("\n");
    }
}
int main (){
    int n,result;
    printf("enter your number :  ");
    scanf("%d",&n);
    result= fibonnaciseries(n);
    return 0;
}