#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    node* link;
};

node* deleteNode(node* head,int p)
{
    node* temp=head;

    if(p==1)
    {
        head=temp->link;
        free(temp);
        return head;
    }

    node* temp2=NULL;

    for(int i=0; i<p-2; i++)
    {
        temp=temp->link;
    }

    temp2=temp->link;
    temp->link=temp2->link;
    free(temp2);

    return head;

}

node* reverseList(node* head)
{
    node* temp=head;
    node* temp2=NULL;
    node* prev=NULL;

    while(temp!=NULL)
    {
        temp2=temp->link;
        temp->link=prev;
        prev=temp;
        temp=temp2;
    }

    head=prev;

    return head;
}

int traverse(node* head)
{
    int k=0;

    node* temp2=head;

    while(temp2!=NULL)
        {
            temp2=temp2->link;
            k++;
        }

    return k;
}

void print(node* head)
{
    node* temp2=head;

    while(temp2!=NULL)
        {
            printf("%d\n", temp2->data);
            temp2=temp2->link;
        }
}

void freeList(node* head)
{

    node* temp=head;
    node* temp2=NULL;

    while(temp!=NULL)
        {
            temp2=temp;
            temp=temp->link;
            free(temp);
        }
        free(head);
}

node* insertNode(int d, int p, node* head)
{


    node* temp=new node();

    temp->data=d;

    if(p==1)
    {
        temp->link=head;
        head=temp;
        return head;
    }

    //checking overflow

    if(p>traverse(head)+1||p<1)
    {
        printf("Error!! No such position!\n");
        return head;
    }

    node* temp2=head;

    int k=0;

    for(int i=2; i<p;i++)
        temp2=temp2->link;

    temp->link=temp2->link;
    temp2->link=temp;

    return head;
}

int main()
{
    node* head=NULL;

    head=insertNode(1,1,head);
    head=insertNode(2,2,head);
    head=insertNode(3,3,head);

    print(head);

    int i;

    scanf("%d", &i);

    head=reverseList(head);

    print(head);

    freeList(head);



    return 0;
}
