#include<stdio.h>
#include<math.h>

double a[128 * 1024];

int main()
{
    unsigned long long d;
    int i=0;

    while(scanf("%llu", &d)!=EOF)
    {
        a[i++]=(double) sqrt(d * 1.0);
    }

    while(--i >=0)
    {
        printf("%.4lf\n", a[i]);
    }

    return 0;
}

