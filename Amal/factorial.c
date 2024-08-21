#include <stdio.h>

void factorial(int a){
    int fact=1;
    for(int i=a;i>0;i--){
        fact=fact*i;

    }
    printf("The factorial of the number %d is %d ",a,fact);
}
