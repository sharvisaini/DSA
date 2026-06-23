#include <stdio.h>
int main() {
    int n,i,j,target;
    printf("enter the no of elements in array: ");
    scanf("%d",&n);
    int array[n];
    for (i=0;i<=n-1;i++) {
        printf("enter your element : ");
        scanf("%d",&array[i]);
}
printf("element to be searched : ");
scanf("%d",&target);
int index=-1;
int arrlength=sizeof(array)/sizeof(array[0]);
for (i=0;i<arrlength;i++) {
    if(target==array[i]) {
        index=i;
        break;
    }
}
if(index!=-1){
    printf(" index of target : %d ",index);
}
else {
    printf(" not present ");
}
return 0;
}