#include <bits/stdtr1c++.h>
using namespace std;

int main(){
    int n=0, d=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>d;
        if(d==1){
            cout<<"HARD"<<endl;
            return 0;
        }
    }
    cout<<"EASY"<<endl;
    return 0;
}
