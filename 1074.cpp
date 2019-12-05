#include<bits/stdc++.h>

using namespace std;

int main(){
    int x, a;

    cin >> x;
    for(int i = 0; i < x; i++){
            cin >> a;
            if(a == 0){
                 cout << "NULL\n";
            }
            else{
            if(a>0)
            {

                if(a%2==0)
                    cout<<"EVEN POSITIVE"<<endl;
                else
                    cout<<"ODD POSITIVE"<<endl;
            }
            else if(a<0)
            {
                if(a%2==0)
                    cout<<"EVEN NEGATIVE\n";
                else
                    cout<<"ODD NEGATIVE\n";
            }
    }


}
 return 0;
}
