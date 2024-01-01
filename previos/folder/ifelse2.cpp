#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"----------Find the biggest number-------------\n\n";
    cout<<"Enter three number please:  ";
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"A is the big number "<<a<<"\n";
        }
    }else if(b>c){
        cout<<"C is the biggest number "<<b<<"\n";
    }else{
        cout<<"C is the biggest number "<<c<<"\n";
    }

    cout<<"\n        -----End----   \n";
}