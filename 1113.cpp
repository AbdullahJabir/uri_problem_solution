#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,x,y;
    while(1)
    {
        cin>>x>>y;
        if(x==y) break;
        else{
            if(x<y){cout<<"Crescente"<<endl;}
            else
                cout<<"Decrescente"<<endl;
        }
    }
    return  0;
}
