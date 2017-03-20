#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    Node* link;
};

Node* head;

void inserting(int x, int p)
{
    Node* temp= new Node();

    temp->data=x;
    temp->link=NULL;

    if(p==1)
    {
        temp->link=head;
        head=temp;
        return;
    }

    Node* temp1=head;

    for(int i=2; i<p; i++)
    {
        temp1=temp1->link;
    }

    temp->link=temp1->link;
    temp1->link=temp;

}

void print()
{
    Node* temp=head;

    printf("The list is:\n");

    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->link;
    }

    printf("\n");
}

int main()
{
    head=NULL;

    int i,n,x,p;

    printf("How many numbers?\n");

    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        printf("Enter your number and position:\n");
        printf("Example: 5 6\n");

        scanf("%d %d", &x, &p);

        inserting(x,p);
    }

    print();

    return 0;
}
