#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int mx=arr[0];
    int mn=arr[0];
    for (int i = 0; i < n; i++)
    {
       mx=max(mx,arr[i]);
       mn=min(mn,arr[i]);
    }
    
    cout<<mn<<" "<<mx;
    
    return 0;
}