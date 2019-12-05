#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m,y,d,da,t,on;
    cin>>n;
    y=n/365;
    da=n%365;
    d=da/30;
    t=da%30;
    on=t;



    cout<<y<<" ano(s)"<<endl;
    cout<<d<<" mes(es)"<<endl;
    cout<<on<<" dia(s)"<<endl;
    return 0;
}
