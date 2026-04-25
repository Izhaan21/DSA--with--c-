#include<iostream>
using namespace std;

    void printArray(int arr[],int size){

        for( int i =0 ; i<size ; i++){
            cout<<arr[i]<<""<<endl;
        }
        cout<<"printing done"<<endl;
    }

void func(int arr[],int size){

    arr[0]= 20;
    arr[1]= 30;
    arr[2]= 40;

    printArray(arr,size);
}


int main(){

    int arr[]={1,2,3};
    int size = 4;
    func(arr,size);
    printArray(arr,size);
}