#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    int pos;
    Node* link;
};

Node* head;

int traverse()
{
    int l=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        temp=temp->link;
        l++;
    }

    return l;
}

void inserting(int d, int p)
{

    Node* temp= new Node();
    temp->data=d;
    temp->pos=p;
    temp->link=NULL;

    if(p==1)
    {
        temp->link=head;
        head=temp;
        return;
    }

    Node* temp1=head;

    for(int i=0; i<(p-2); i++)
    {
        if(temp1->link==NULL)
            break;
        temp1=temp1->link;
    }

    temp->link=temp1->link;
    temp1->link=temp;
}

void flist()
{
    Node* temp=head;
    Node* another;

    while(temp!=NULL)
    {
        temp=temp->link;
        another=head;
        head=another->link;
        free(another);
    }

}

void del(int p)
{

    Node* temp=head;

    if(p==1)
    {
        head=temp->link;
        delete temp;
    }

    for(int i=0; i<(p-2); i++)
    {
        temp=temp->link;
    }

    Node* temp2=temp->link;
    temp->link=temp2->link;
    free(temp2);

}

void print()
{
    Node* temp=head;

    printf("The list is :\n");

    while(temp!=NULL)
    {
        printf("%d at %dth position\n", temp->data, temp->pos);
        temp=temp->link;
    }
    printf("\n\n");
}

int main()
{
    head=NULL;

    int x, d, p;

    printf("How many numbers?\n");

    scanf("%d", &x);

    printf("Enter the data and the position:\n");

    while(x--)
    {
        scanf("%d %d", &d, &p);
        if((p<1||p>traverse()+1))
        {
            printf("Invalid position!!!\n");
            x++;
            continue;
        }
        inserting(d,p);
    }
    print();

    again:

    printf("Which one would u llike to delete?\n");

    scanf("%d", &p);
    if(p<1||p>traverse())
        {
            printf("Invalid position!!!\n");
            goto again;
        }
    del(p);

    print();
    flist();

    return 0;
}
