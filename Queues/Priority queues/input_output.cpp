#include<cstdio>
#include<iostream>
#include<queue>

using namespace std;

int main()
{
    priority_queue <int, std::vector<int>, std::greater<int> > q;

    for(int i=5; i>=0; i--)
        q.push(i);

    while(!q.empty())
    {
        cout<<q.top()<<endl;
        q.pop();
    }


    return 0;
}
