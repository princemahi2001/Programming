#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str[5]={"i","am","the","good","boy"};
    vector<string> v;
    for(int i=0;i<5;i++)
    {
        v.push_back(str[i]);
    }
    for(int i=v.size();i>=0;i--)
    {
        cout<<v[i]<<" ";
    }
}


//using stack

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str[5]={"i","am","the","good","boy"};
    stack<string> v;
    for(int i=0;i<5;i++)
    {
        v.push(str[i]);
    }
    while(!v.empty())
    {
        string s1=v.top();
        v.pop();
        cout<<s1<<" ";
    }
}
