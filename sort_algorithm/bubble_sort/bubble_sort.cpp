#include<iostream>
using namespace std;

void bubble_sort(int a[],int size){
    int i,j,temp;
    for(i=0;i<size-1;i++){
        for(j=0;j<size-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
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
        // cout<<"Enter the "<<i+1<<" number: ";
        cin>>array[i];
    }
    display(array,size);
    cout<<"array after sorted : ";
    bubble_sort(array,size);
    display(array,size);

}