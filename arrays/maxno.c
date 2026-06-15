#include <stdio.h>
int main () {
    int i,n,max;
    printf("enter no of  elements : ");
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++) {
        printf("enter your element :  ");
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for (i=0;i<n;i++) {
        if (arr[i]>max) {
            max=arr[i];
    }
}
     printf("max element is:  %d " ,max);
    return 0;
}