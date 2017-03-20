#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,a[100000],i,j,ans;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    ans=999999999;

    for(i=0; i<n; i++)
    {
       for(j=i+1; j<n; j++)
        {
            if(abs(a[i]-a[j]<ans))
                ans=abs(a[i]-a[j]);

            printf("\ndiff: %d\n", a[i]-a[j]);
        }

    }

    printf("%d\n", ans);

    return 0;
}

