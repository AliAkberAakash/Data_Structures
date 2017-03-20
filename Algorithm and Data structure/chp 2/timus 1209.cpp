/*
*
* Program Name:
* Details:
* Solved By: Liverwort
* Date:
*
*/

#include<stdio.h>


int main()
{
   unsigned long long int i, j, n, d, a[100000];

   scanf("%lld", &n);

   for(i=1; i<=n; i++)
   {
       scanf("%lld", &d);
       j=1;
       while(d>j)
       {
           d=d-j;
           j++;
       }
       if(d==1)
        printf("%d", 1);
       else
        printf("%d", 0);
       if(i!=n)
        printf(" ");

   }

   printf("\n");


    return 0;
}

