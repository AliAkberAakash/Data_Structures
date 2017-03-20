#include<stdio.h>
#include<iostream>


int main()
{
    using namespace std;

    long long int a,b,t;

    scanf("%lld %lld", &a, &b);

    t=a+b-1;

    if(t>10)
        t=10;

    printf("%lld %lld\n", t-a, t-b);

    return 0;
}

