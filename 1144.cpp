#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,a,b,c;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        b=pow(i,2);
        c=pow(i,3);
        cout<<i<<" "<<b<<" "<<c<<endl;
        cout<<i<<" "<<b+1<<" "<<c+1<<endl;
    }
    return 0;
}
