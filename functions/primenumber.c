#include <stdio.h>

int primeno(int a) {
    int i;

    if (a <= 1) {
        printf("not prime");
    } else {
        int is_prime = 1;
        for (i = 2; i * i <= a; i++) {
            if (a % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("is prime");
        } else {
            printf("not prime");
        }
    }

    return 0;
}

int main(void) {
    int n;
    printf(" enter n : ");
    scanf("%d",&n);
    char result= primeno(n);
    printf("%c",&result);
    return 0 ;
}
