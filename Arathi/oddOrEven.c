
#include <stdio.h>
#include <math.h>

int main() {
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if ((n % 2)==0) {
        printf("%d is an even number.\n", n);
    }
    else{
        printf("%d is an odd number.\n", n);
    }

    
    return 0;
}
