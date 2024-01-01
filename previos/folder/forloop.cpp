#include<iostream>
using namespace std;
int main(){
    int num,count=0;
    cout<<"Enter the number: ";
    cin>>num;
    for(int i=1;i<=num;i++){
        count+=i;
    }
    cout<<count<<endl;
    return 0;
}
