#include <Stdio.h>
int sumofdigits(int a) {
    int digit;
    int sum= 0;
    while(a>0){
        digit=a%10;
        a=a/10;
        sum = sum + digit;
    }
    return sum;
}
int main () {
    int a,result;
    printf("enter you number :  ");
    scanf("%d",&a);
    result= sumofdigits(a);
    printf("the sum of digits is : %d ",result);
    return 0;
}