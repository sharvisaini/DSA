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
    int max,min;
    max=array[0];
    for(i=0;i<n;i++){
        if (array[i]>max) {
            max=array[i];
        }
    }
    min = array[0];
    for(i=0;i<n;i++) {
        if (array[i]<min) {
            min = array [i];
        }
    }
    // printf("max val = %d\n",max);
    // printf("min val is = %d\n",min);
    int temp;
    temp=max;
    max=min;
    min=temp;
    printf("max val = %d\n",max);
    printf("min val is = %d\n",min);
    return 0;

}