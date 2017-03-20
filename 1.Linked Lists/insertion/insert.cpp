#include<cstdio>
#include<cstdlib>
#include<iostream>

struct Node
{
    int data;
    Node* link;
};

Node* head;

void inserting(int x)
{
    Node* temp= new Node();

    temp->data=x;
    temp->link=head;
    head=temp;
}

void print()
{
    Node* temp1=head;

    printf("The link is:\n");

    while(temp1!=NULL)
    {
        printf("%d ", temp1->data);
        temp1=temp1->link;
    }
    printf("\n");
}

int main()
{
    int n,x;

    head=NULL;

    printf("How many numbers?\n");

    scanf("%d", &n);

    while(n--)
    {
        scanf("%d", &x);

        inserting(x);
        print();
    }

    return 0;
}
