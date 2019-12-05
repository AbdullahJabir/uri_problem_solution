#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,f,tu,te,fi,tw,on,h;

    scanf("%d",&n);
    h=n/100;
    t=n%100;
    f=t/50;
    t=t%50;
    tu=t/20;
    t=t%20;
    te=t/10;
    t=t%10;
    fi=t/5;
    t=t%5;
    tw=t/2;
    t=t%2;
    on=t;


    cout<<n<<endl;
    cout<<h<<" nota(s) de R$ 100,00"<<endl;
    cout<<f<<" nota(s) de R$ 50,00"<<endl;
    cout<<tu<<" nota(s) de R$ 20,00"<<endl;
    cout<<te<<" nota(s) de R$ 10,00"<<endl;
    cout<<fi<<" nota(s) de R$ 5,00"<<endl;
    cout<<tw<<" nota(s) de R$ 2,00"<<endl;
    cout<<on<<" nota(s) de R$ 1,00"<<endl;
    return  0;
}
