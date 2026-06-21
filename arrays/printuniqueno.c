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
    for (i=0;i<arrLength;i++){
        int isDuplicate=0;
          for (j=0;j<i;j++){
            
            if (array[i]==array[j]) {
           isDuplicate=1;
           break;
            } 
        }              
     if (!isDuplicate)
     {
 printf(" i : %d",array[i]);
           
 
     }
          }
        
return 0;
}
