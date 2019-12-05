///1079 uri

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    float a,b,c,d,s,n;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>b>>c;

        s=(a*2+b*3+c*5)/(2.0+3.0+5.0);
        cout<<fixed<<setprecision(1)<<s<<endl;
    }
    return 0;
}
