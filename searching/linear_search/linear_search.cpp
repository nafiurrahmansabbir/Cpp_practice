#include<iostream>
using namespace std;
void linear_search(int array[],int size,int eliment){
    int i=0,count=0;
    for(i=0;i<size;i++){
        if(array[i]==eliment){
            cout<<"the eliment is found at "<<i+1<<endl;
            count=1;
            break;
        }
    }
    if(count==0){
        cout<<"Eliment not in this  array! ";
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
    int search_aliment;
    cout<<"Enter the searching number: ";
    cin>>search_aliment;
    linear_search(array,size,search_aliment);
}