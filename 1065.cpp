#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,n,count=0;
    for(i=1;i<=5;i++){
        cin>>n;


        if(n%2==0)
            count++;
    }
    cout<<count<<" valores pares"<<endl;
    return  0;
}
