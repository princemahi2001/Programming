#include<bits/stdc++.h>
using namespace std;

bool ispalin(string s)
{
    int i=0;
    int j=s.length()-1;
    while(i<j)
    {
        if(s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main()
{
    string s;
    cin>>s;
    if(ispalin(s)) cout<<"palindrome"<<endl;
    else cout<<"not";
}
