#include<cstdio>
#include<cstdlib>
#include<iostream>

struct Node
{
    int data;
    Node* link;
};

Node* head;


void print()
{
    Node* temp1=head;

    printf("The list is:\n");

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

    scanf("%d", &x);

    Node* temp= new Node();


    temp->data=x;
    temp->link=NULL;
    head=temp;

    print();

    Node* temp1=NULL;

    n--;

    while(n--)
    {
        scanf("%d", &x);
        temp1=head;

        temp=new Node();

        temp->data=x;
        temp->link=NULL;

        while(temp1->link!=NULL)
        {
            temp1=temp1->link;
        }

        temp1->link=temp;

        print();

    }

    return 0;
}
