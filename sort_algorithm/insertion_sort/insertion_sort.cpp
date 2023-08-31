#include<iostream>
using namespace std;
void display(int a[],int size);

void insertion_sort(int array[],int size){
    int i,j,current;
    for(i=1;i<size;i++){
        current=array[i];
        j=i-1;
        while(array[j]>current && j>=0){
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=current;
    }
}


int main(){
    int array[]={77,6,5,456,53,8,9,2,1};
    int size=sizeof(array)/sizeof(array[0]);
    // cout<<size;
    display(array,size);
    cout<<"After the sorted \n";
    insertion_sort(array,size);
    display(array,size);
}
void display(int a[],int size){
    int i;
    cout<<"The array is: ";
    for(i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}