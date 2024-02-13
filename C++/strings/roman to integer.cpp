#include<bits/stdc++.h>
using namespace std;
int value(char r)
{
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;
 
    return -1;
}
int main()
{
    string str="MCMIV";
    int ans=0;
    for(int i=0;i<str.length();i++)
    {
        if(i+1<str.length() && value(str[i])<value(str[i+1]))
        {
            ans+=value(str[i+1])-value(str[i]);
            i++;
        }
        else
        {
            ans+=value(str[i]);
        }
        
    }
    cout<<ans;
    
}
