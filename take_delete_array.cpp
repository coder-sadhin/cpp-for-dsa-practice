#include <bits/stdc++.h>
using namespace std;

int *get_array(int n)
{
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    return arr;
}

int main()
{

    int n;
    cin>>n;
    int *arr=get_array(n);
    int m;
    cin>>m;
    int arr2[m];

    for (int i = 0; i < n; i++)
    {
        arr2[i]=arr[i];
    }
    delete[] arr;
    for (int i = n; i < m; i++)
    {
        cin>>arr2[i];
    }

    for (int i = 0; i < m; i++)
    {
        cout<<arr2[i]<<" ";
    }
        
    return 0;
}