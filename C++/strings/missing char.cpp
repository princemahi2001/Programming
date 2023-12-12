
#include<bits/stdc++.h>
using namespace std;

void missing(string &s)
{
    vector<bool> v(26, false);
    for(int i = 0; i < s.length(); i++)
    {
        if(isalpha(s[i])) 
        {
            int index = tolower(s[i]) - 'a';
            v[index] = true;
        }
    }

    cout << "Missing characters: ";
    for(int i = 0; i < 26; i++)
    {
        if(v[i] == false)
        {
            cout << (char)(i + 'a') << " ";
        }
    }
}

int main()
{
    string s = "abcdef?hi!klmnopqrstuvwxyz";
    missing(s);

    return 0;
}
