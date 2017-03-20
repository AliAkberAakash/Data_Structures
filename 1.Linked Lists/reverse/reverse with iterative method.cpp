#include<cstdio>
#include<cstdlib>

struct Node
{
    int data;
    Node* next;
};

Node* head;


void inserting(int d, int p);
void del(int p);
void print();
void fMem();
int traverse();
Node* rev(Node* head);


int main()
{
    head=NULL;

    int n,d,p;

    printf("How many numbers do you want in the list?\n");

    scanf("%d", &n);


    while(n--)
    {
        stay:
        scanf("%d %d", &d, &p);

        if(p>=1&&p<=traverse()+1)
        {
            inserting(d,p);
            continue;
        }

        printf("Invalid position to insert!!! the next valid position is %d \n", traverse()+1);
        goto stay;
    }

    print();

    head=rev(head);

    print();

    fMem();

    return 0;
}

void inserting(int d, int p)
{
    Node* temp=new Node();

    temp->data=d;
    temp->next=NULL;

    if(p==1)
    {
        temp->next=head;
        head=temp;
        return;
    }

     Node* temp2=head;

    for(int i=0; i<(p-2); i++)
        temp2=temp2->next;

    temp->next=temp2->next;
    temp2->next=temp;

}

void print()
{
    Node* temp=head;

    printf("\nThe list is:\n");
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->next;
    }

    printf("\n\n");
}

int traverse()
{
    int k=0;
    Node* temp=head;

    while(temp!=NULL)
    {
        temp=temp->next;
        k++;
    }

    return k;
}

Node* rev(Node* head)
{
    Node* temp=head;
    Node* temp2=NULL;
    Node* prev=NULL;

    while(temp!=NULL)
    {
        temp2=temp->next;
        temp->next=prev;
        prev=temp;
        temp=temp2;
    }

    head=prev;

    return head;
}

void fMem()
{
    Node* temp=head;
    Node* temp2=NULL;

    while(temp!=NULL)
    {
        temp2=head;
        head=temp->next;
        temp=temp->next;
        free(temp2);
        temp2=NULL;
    }

    printf("\nThe memory has been freed!\n");
}
