#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum=0,i;
    cin>>a>>b;
    if(a>b){
        int temp=b;
        b=a;
        a=temp;
    }
    for(i=a;i<=b;i++){
        if(i%13!=0)
            sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}
