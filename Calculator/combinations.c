int fact(int);
int combinations(int a,int b)
{
    int c=fact(a)/(fact(a-b)*fact(b));
    return c;
}