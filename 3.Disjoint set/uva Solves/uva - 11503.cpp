/*
* Solution to UVA 11503 Virtual Friends
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<bits/stdc++.h>

using namespace std;

map <string,int> friends;
int siz[100005];
int uni[100005];

void initialize()
{
    for(int i=0; i<100005; i++)
    {
        uni[i]=i;
        siz[i]=1;
    }
}

void add(string s,int &till_now)
{
    friends[s]=till_now++;
}

int root(int s)
{
    while(uni[s]!=s)
    {
        uni[s]=uni[uni[s]];
        s=uni[s];
    }
    return s;
}

int unio(int a, int b)
{
    int root_a=root(a);
    int root_b=root(b);

    if(siz[root_a]<siz[root_b])
    {
        uni[root_a]=uni[root_b];
        siz[root_b]+=siz[root_a];
        return siz[root_b];
    }
    else
    {
        uni[root_b]=uni[root_a];
        siz[root_a]+=siz[root_b];
        return siz[root_a];
    }
}

bool fin(int a, int b)
{
    if(root(a)==root(b))
        return true;
    return false;
}

int main()
{
    int test, trials;

    string name1,name2;

    scanf("%d",&test);

    for(int i=0; i<test; i++)
    {
        int till_now=0;
        initialize();
        scanf("%d",&trials);
        getchar();

        for(int j=0; j<trials; j++)
        {
            cin>>name1>>name2;
            if(friends.find(name1) == friends.end())
                add(name1,till_now);
            if(friends.find(name2) == friends.end())
                add(name2,till_now);

            if(!fin(friends[name1], friends[name2]))
            {
                int z=unio(friends[name1], friends[name2]);
                printf("%d\n", z);
            }
            else
                printf("%d\n", siz[root(friends[name1])]);
        }
        friends.clear();
    }


    return 0;
}
