#include <Stdio.h>
void main () {
    int n,i,j;
    printf("enter the no of elements in array: ");
    scanf("%d",&n);
    int array[n];
    for (i=0;i<=n-1;i++) {
        printf("enter your element : ");
        scanf("%d",&array[i]);
}
int arrLength=sizeof(array)/sizeof(array[0]);
for (j=0; j<arrLength; j++)
{
    printf("%d",array[j]);
    printf("\n");
}

//return 0;
}
