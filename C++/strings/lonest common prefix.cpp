#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str[4]={"geeksforgeeks", "geeks", "geek", "geezer"};
    sort(str,str+4);
    int en=min(str[0].size(),str[3].size());
    string str1=str[0];
    string str2=str[3];
    string res="";
    int i=0;
    while(str1[i]==str2[i] && i<en)
    {
        if(str1[i]==str2[i])
        {
            res=res+str1[i];
        }
        i++;
    }
    cout<<res;
    
}
