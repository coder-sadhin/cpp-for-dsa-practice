#include <bits/stdc++.h>
using namespace std;

int main()
{

    char x[100];
    cin>>x;
    if(islower(x[0]))
    {
        cout<<"ALPHA"<<endl<<"IS SMALL";
    }
    else if (isupper(x[0]))
    {
        cout<<"ALPHA"<<endl<<"IS CAPITAL";
    }
    else if (isdigit(x[0])){
        cout<<"IS DIGIT";
    }
    
    return 0;
}