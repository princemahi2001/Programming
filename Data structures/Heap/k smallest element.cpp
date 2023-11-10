#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[6]={7,10,4,3,20,15};
    priority_queue<int> maxh;
    int k=3;
    for(int i=0;i<6;i++)
    {
        maxh.push(a[i]);
        if(maxh.size() > k )
        {
            maxh.pop();
        }
    }
    maxh.top();
}
