#include<stdio.h>

void ReverseNumber()
{
    int num;
    int reverse_num =0;
    printf("Enter the number  : ");
    scanf("%d", &num);
    for(;num>0;num/=10)
    {
        reverse_num = reverse_num*10 + num%10;
    }
    printf("The reversed number is : %d", reverse_num);
}
int main()
{
    ReverseNumber();
    return 0;

}