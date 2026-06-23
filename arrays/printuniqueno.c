#include <stdio.h>
int main () {
    int n,i,j;
    printf("enter no of elements : ");
    scanf("%d",&n);
    int array[n];
    for (i=0;i<n;i++) {
        printf("enter your element : ");
        scanf("%d",&array[i]);
    }
    int arrLength=sizeof(array)/sizeof(array[0]);
    int unique=0;
    for (i=0;i<arrLength;i++){
        unique=unique^array[i];
        printf("unique =  %d\n ",unique);
    }
    printf("the unique element is : %d ",unique);
    return 0;
}
