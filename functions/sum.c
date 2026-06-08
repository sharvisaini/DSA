#include <stdio.h>
int sum(int a,int b){
   int result =a+b;
    return result;
}
int main () {
    int a,b,result;
    printf ("enter a and b : ");
    scanf("%d%d",&a,&b);
    result = sum(a,b);
    printf("%d",result);
    return 0;
}