#include<iostream>
using namespace std;

void selection_sort(int array[],int size){
    int i,j,temp,min_index;
    for(i=0;i<size-1;i++){
        min_index=i;
        for(j=i+1;j<size;j++){
            if(array[j]<array[min_index]){
                min_index=j;
            }
        }
        temp=array[min_index];
        array[min_index]=array[i];
        array[i]=temp;
        
    }
}
// void selection_sort(int array[],int size){
//     int i,j,temp,min_index;
//     for(i=0;i<size-1;i++){
//         // min_index=i;
//         for(j=i+1;j<size;j++){
//             if(array[j]<array[i]){
//                 temp=array[j];
//         array[j]=array[i];
//         array[i]=temp;
//             }
//         }
        
        
//     }
// }

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
    selection_sort(array,size);
    cout<<"Print after sorting: \n";
    display(array,size);
}