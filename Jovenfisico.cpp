#include <bits/stdtr1c++.h>

using namespace std;

int main(){
    int n=0, d=0,r1,r2,r3;
    cin>>n;
    int Vec[n][3];
    for(int i=0; i<n; i++){
        cin>>Vec[i][0];
        cin>>Vec[i][1];
        cin>>Vec[i][2];
    }
    for(int i=0; i<n; i++){
        d=d+Vec[i][0];
    }
    r1=d;
    d=0;
    for(int i=0; i<n; i++){
        d=d+Vec[i][1];
    }
    r2=d;
    d=0;
    for(int i=0; i<n; i++){
        d=d+Vec[i][2];
    }
    r3=d;
    if(r1==0 && r2==0 && r3==0){
    cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;

}
