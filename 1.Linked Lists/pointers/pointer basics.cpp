/*
*
* Program Name: Pointer Basics.
* Details: Exercise
* Solved By: Liverwort
* Date: 26.6.16
*
*/

#include<iostream>


int main()
{
    using namespace std;

    int a,b,c;
    int* p;
    int* q;

    a=1; b=2; c=3;
    p=&a; q=&b;
    c=*p; p=q;
    *p=13;

    cout<<a<<" "<<b<<" "<<c<<"\n";


    return 0;
}

