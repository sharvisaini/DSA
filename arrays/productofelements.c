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
    int product=1;
    for (i=0;i<n;i++){
        product=product*arr[i];
    }
    printf(" the product of elements is : %d ",product);
    return 0;
    }