#include<iostream>
using namespace std;

int binarysearch(int arr[], int size , int target){

    int s = 0;
    int e = size - 1 ; 
    int mid = s + (e-s)/2;

    while(s<=e){
        if(arr[mid]== target){
            return mid;
        }

        else if(arr[mid]> target){
            e = mid -1;  // left side
        }
        else {
            s = mid +1 ; //right side
        }
        mid = s + (e-s)/2; 
    }
    
    return -1;
} 




int  main(){
  
    int arr[] = {2,4,6,8,10,12,16};
    int size = 7; 
    int target = 10;

    int indexoftarget = binarysearch(arr, size ,target);
    if(indexoftarget == -1){
        cout<<"target found"<<endl;
    }

    else{
        cout<<"target  found at index"<<" "<<  indexoftarget  <<endl;
    }
    return 0 ;
}