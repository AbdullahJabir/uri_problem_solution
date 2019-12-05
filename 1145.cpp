#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,n,j;
    int x,y;
    cin>>x>>y;

    n=1;
    for(i=1;i<=y;i++)
    {
        if(n==x){
            cout<<i<<endl;
            n=1;
        }
        else{
            cout<<i<<" ";
            n++;
        }
    }
    return  0;
}

