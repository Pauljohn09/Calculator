#include <stdio.h>
//Add yor function declaration
void mul();
void mod();
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
void oddOrEven();
int fact(int);
int permutations(int,int);
int combinations(int,int);
void RootsOfQuadraticEquation();
void ReverseNumber();

int main()
{
    //Call your function here 
    //Also give comments :Tell whos function this is .

   /*to multiply 2 numbers-Pooja*/
   mul();
   /*to find remainder of 2 numbers-Pooja*/
   mod();



    primeNumber();
    oddOrEven();
    printf("%d",permutations(5,4));
    printf("%d",combinations(5,4));
   //to find the prime number
    void primeNumber();
    //to find the even or odd number
    void oddOrEven();

    RootsOfQuadraticEquation();
    ReverseNumber();



    return 0;
}