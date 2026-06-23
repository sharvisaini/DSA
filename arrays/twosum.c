#include <stdio.h>
int main () {
    int n,i,j,target;
    printf("enter no of elements of array: ");
    scanf("%d",&n);
    int array[n];
    for (i=0;i<=n-1;i++) {
        printf("enter your element : ");
        scanf("%d",&array[i]);
    }
    printf("enter your target : ");
    scanf("%d",&target);
    int arrlength=sizeof(array)/sizeof(array[0]);
    int index1=-1;
    int index2=-1;
    for (i=0;i<arrlength;i++) {
        for (j=0;j<arrlength;j++) {
            if(target==array[i]+array[j]) {
                index1=j;
                index2=i;
                break;
            }
        }
    }
    if (index1!=-1&&index2!=-1) {
        printf(" indices are : { %d , %d }",index1,index2);
    }
    else {
        printf(" not possible ");
    }
    return 0;
 
}