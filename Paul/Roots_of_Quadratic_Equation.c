#include<stdio.h>
#include<math.h>
int main()
{
int a =1, b=-16, c=1;
float root1, root2;
float d = b*b - 4*a*c;
if(d>0)
{
    printf("The equation have real and unequal roots\n");
    root1 = (float)(-b + sqrt(d))/(2*a);
    root2 = (float)(-b - sqrt(d))/(2*a);
    printf("The roots are %f and %f", root1, root2);
}
else if (d==0)
{
    printf("The roots are real and equal");
    root1 = -b/(2*a);
    printf("The root is %f", root1);
}
else
    printf("The roots are complex conjugate");
return 0;
}
