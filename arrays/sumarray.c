#include <stdio.h>
int main () {
    int i,n,m,j;
    printf("enter no of  elements : ");
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++) {
        printf("enter your element :  ");
        scanf("%d",&arr[i]);
    }
    printf("enter no of  elements : ");
    scanf("%d",&m);
    int ARR[m];
    for (i=0;i<m;i++) {
        printf("enter your element :  ");
        scanf("%d",&ARR[i]);
    }
   if (n==m) {
    int sumarray[n];
    for(i=0;i<n;i++) {
        sumarray[i]= arr[i]+ARR[i];
    }
    printf("the resulting array is:");
    for (i=0;i<n;i++) {
    printf("%d ",sumarray[i]);
  }
   }
   else {
    printf("not valid");
   }
return 0;
}
  




