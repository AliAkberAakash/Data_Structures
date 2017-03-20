/*
*
* Program Name: The Ampersand bug
* Details: Exercise
* Solved By: Liverwort
* Date: 26.6.16
*
*/

#include<iostream>


// TAB -- The Ampersand Bug function

// Returns a pointer to an int

int* TAB()
{

    int temp;

    temp=5;

    return(&temp); // return a pointer to the local int
}

int Victim()
{
    int* ptr;

    ptr = TAB();

    *ptr = 42; // Runtime error! The pointee was local to TAB

    return *ptr;

}


int main()
{
    using namespace std;

    cout<<Victim();

    return 0;
}

