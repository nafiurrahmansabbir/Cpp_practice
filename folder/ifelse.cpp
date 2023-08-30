#include<iostream>
using namespace std;

int main(){
    int saving;
    cout<<"Enter your saving: ";
    cin>>saving;
    if(saving<500){
        cout<<"Ewwww! only "<<saving<<" Saving is to small!\n";
    }else{
        cout<<"Congratulation! you have a big anount that is "<<saving<<"\n";
    }

    return 0;
}