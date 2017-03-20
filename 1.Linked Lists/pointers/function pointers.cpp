#include<stdio.h>

int factorial(int a)
{
    if(a==1)
        return a;
    else
        return factorial(a-1)*a;
}


int main()
{
    int b,c;

    int (*p)(int);

    p=&factorial;

    scanf("%d", &c);

    b= (*p)(c);

    printf("%d\n", b);

    return 0;
}

