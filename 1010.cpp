#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c,d,e;
    float f,g,h;
    cin>>a>>b>>f;
    h=b*f;
    cin>>c>>d>>g;
    h+=d*g;

    cout<<"VALOR A PAGAR: R$ "<<fixed << setprecision(2)<<h<<endl;
    return 0;
}
///URI 1010
