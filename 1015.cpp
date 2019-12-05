#include<bits/stdc++.h>
using namespace std;
int main()
{
   float a,b,c,d,f,g,h,i;
   cin>>a>>b>>d>>f;
   c=pow((d-a),2);

   g=pow((f-b),2);
   h=sqrt(c+g);

   cout<<fixed<<setprecision(4)<<h<<endl;
   return 0;
}
///uri 1015
