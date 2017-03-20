#include<cstdio>
#include<cstring>
#include<iostream>


int main()
{
    using namespace std;

    int k,l,n,i,j,t=1;
    char s[100];

    scanf("%d", &n);
    getchar();
    gets(s);

    k=strlen(s);

    while(n>0)
    {
        t=t*n;
        n=n-k;
    }

    printf("%d\n", t);

    return 0;
}

