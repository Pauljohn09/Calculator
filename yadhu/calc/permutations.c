int fact(int);
int permutations(int a,int b)
{
    int p;
    p=(fact(a)/fact(a-b));
    return p;
}
