#include<bits/stdc++.h>
using namespace std;
int main()
{

    float n;
    cin>>n;
    if(n<0 || n>100)
        cout<<"Fora de intervalo"<<endl;
    else{


  if(n >= 0 && n <= 25){


   printf("Intervalo [0,25]\n");


  }else if(n > 25 && n <= 50){


   printf("Intervalo (25,50]\n");


  }else if(n > 50 && n <= 75){


   printf("Intervalo (50,75]\n");


  }else{


   printf("Intervalo (75,100]\n");


  }

}
  return    0;
}
