#include <stdio.h>
int main () {
    int i,n;
    printf("enter no of  elements : ");
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++) {
        printf("enter your element :  ");
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for (i=0;i<n;i++) {
        sum=sum+arr[i];
    }
    printf("the sum of elements is : %d ",sum);
    return 0;
}