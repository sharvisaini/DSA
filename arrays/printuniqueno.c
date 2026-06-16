#include <stdio.h>
int main () {
    int n,i;
    printf("enter no of elements : ");
    scanf("%d",&n);
    int array[n];
    for (i=0;i<n;i++) {
        printf("enter your element : ");
        scanf("%d",&array[i]);
    }
int unique;
unique=array[0];
for (i=0;i<n;i++){
    if (array[i]==unique) {
        break;
    }
    else {
        unique=array[i];
    }
}
 printf("unique elements are : %d",unique);
return 0;
}
