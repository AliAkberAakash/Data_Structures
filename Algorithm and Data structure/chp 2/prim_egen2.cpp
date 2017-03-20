#include<stdio.h>
#include<stdlib.h>
#include<iostream>

#define SIZE 100000

int main()
{
    long int i,j,k;

    bool* p= (bool*) malloc(sizeof(bool)*SIZE);

    for(i=2; i<SIZE; i++)
    p[i]=true;



    for(i=2; i<SIZE; i++)
    {
        if(p[i])
        {
            for(j=i; j<SIZE; j++)
                {
                    if(i*j<SIZE)
                    p[i*j]=false;
                }
        }
    }

    int n=0;

    for(i=2; i<SIZE; i++)
    {
        if(p[i])
        {
            printf("%d, ",i);
            n++;
        }
    }

    free(p);

    return 0;
}
