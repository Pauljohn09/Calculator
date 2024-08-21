#include<stdio.h>
#include<math.h>
void primeNumber(){
    int a,flag,i=0;
     printf("Enter a positive integer: ");
    scanf("%d", &a);
    
    if (a == 0 || a == 1) {
        flag = 1;
    }

    for (i = 2; i <= sqrt(a); ++i) {
        if (a % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        printf("%d is a prime number.\n", a);
    } else {
        printf("%d is not a prime number.\n", a);
    }
}