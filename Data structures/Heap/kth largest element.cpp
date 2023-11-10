#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[6]={7,10,4,3,20,15};
    priority_queue<int,vector<int>, greater<int>> minh;
    int k=3;
    for(int i=0;i<6;i++)
    {
        minh.push(a[i]);
        if(minh.size() > k )
        {
            minh.pop();
        }
    }
    cout<<k<<"th largest is "<<minh.top();
}

output:-
  3th largest is 10


    // Print k largest elements
  #include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[6] = {7, 10, 4, 3, 20, 15};
    priority_queue<int, vector<int>, greater<int>> minh; // Use min heap
    int k = 3;
    for (int i = 0; i < 6; i++)
    {
        minh.push(a[i]);
        if (minh.size() > k)
        {
            minh.pop();
        }
    }

    cout << "The " << k << " largest elements are: ";
    while (!minh.empty())
    {
        cout << minh.top() << " ";
        minh.pop();
    }

    return 0;
}
