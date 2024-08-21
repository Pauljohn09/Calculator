#include <stdio.h>
//Add yor function declaration
//Adding this line
//Adding Second Line
void mul();
void mod();
void primeNumber();
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
   printf("enter something");

    primeNumber();
    oddOrEven();
    printf("%d",permutations(5,4));
    printf("%d",combinations(5,4));
   //to find the prime number
    primeNumber();
    //to find the even or odd number
    oddOrEven();

    RootsOfQuadraticEquation();
    ReverseNumber();



    return 0;
}