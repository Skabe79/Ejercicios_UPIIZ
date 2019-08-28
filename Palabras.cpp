#include<bits/stdtr1c++.h>

using namespace std;

int main(){
    int n=0;
    cin>>n;
    string Palabras;
    for(int i=0; i<n; i++){
        cin>>Palabras;
        if(Palabras.length()>10){
            cout<<Palabras[0]<<(Palabras.length())-2<<Palabras[Palabras.length()-1]<<endl;
        }
        else{
            cout<<Palabras<<endl;
        }
    }
    return 0;
}
