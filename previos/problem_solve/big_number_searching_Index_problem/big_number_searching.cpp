#include<iostream>
using namespace std;
void find(int array[],int size){
    int i=0,big=array[0];
    for(i=0;i<size;i++){
        if(big<array[i]){
            big=array[i];
        }
    }
    for(i=0;i<size;i++){
        if(array[i]==big){
             cout<<"the eliment is found at "<<i+1<<endl;
             break;
        }
    }
}
void display(int a[],int size){
    int i;
    cout<<"The array is: ";
    for(i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int size;
    cout<<"Enter array size: ";
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the "<<i+1<<" number: ";
        cin>>array[i];
    }
    display(array,size);
    find(array,size);

}