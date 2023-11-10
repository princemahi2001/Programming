#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[6] = {7, 10, 4, 3, 20, 15};
    int k = 2; // Set the value of k

    priority_queue<int, vector<int>, greater<int>> minh; // Use min heap

    // Push the first k+1 elements into the min heap
    for (int i = 0; i <= k; i++)
    {
        minh.push(a[i]);
    }

    int index = 0;

    // Process the remaining elements of the array
    for (int i = k + 1; i < 6; i++)
    {
        a[index++] = minh.top();
        minh.pop();
        minh.push(a[i]);
    }

    // Pop the remaining elements from the min heap and update the array
    while (!minh.empty())
    {
        a[index++] = minh.top();
        minh.pop();
    }

    // Print the k-sorted array
    cout << "The " << k << "-sorted array is: ";
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
