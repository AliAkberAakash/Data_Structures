/*
* Solution to UVA 793 Network Connections
* Solved by: Ali Akber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/
#include<bits/stdc++.h>

using namespace std;

int arr[1000005];

void initialize(int n)
{
    for(int i=0; i<=n; i++)
    {
        arr[i]=i;
    }
}

int root(int i)
{
    while(arr[i]!=i)
    {
        arr[i]=arr[arr[i]];
        i=arr[i];
    }

    return i;
}


void uni(int a, int b)
{
    int root_a=root(a);
    int root_b=root(b);

    arr[root_a]=root_b;
}

bool fin(int a, int b)
{
    if(root(a)==root(b))
        return true;
    return false;
}

int main()
{
    int no_of_nodes, node1,node2, testCase,suc,un;
    char ch;

    string str;

    scanf("%d", &testCase);
    getchar();
    getchar();

    for(int i=1; i<=testCase; i++)
    {
        scanf("%d", &no_of_nodes);
        getchar();

        suc=un=0;

        initialize(no_of_nodes);

        char prev = 0;

        while(1)
        {
            if(!getline(cin,str) || str.empty())    break;

            sscanf(str.c_str(),"%c %d %d", &ch, &node1, &node2);

            if(ch=='c')
            {
                uni(node1, node2);
            }
            else
            {
                if(fin(node1,node2))
                    suc++;
                else
                    un++;
            }
        }

        printf("%d,%d\n", suc, un);

        if(i!=testCase)
            puts("");
    }

    return 0;
}


