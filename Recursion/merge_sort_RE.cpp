#include<iostream>
using namespace std;


void merge(int*arr, int s , int e){
    //length of 2 new array 
    
    int mid = (s+e)/2;
    int len1 = mid - s +1;
    int len2 = e-mid;
    
    //creatoing copy of two new array from main array
    int*left = new int[len1];
    int*right = new int[len2];
    
    //copying from main array
    
    int k = s;
    for(int i =0; i<len1; i++){
        left[i] = arr[k];
        k++;
    }

     k = mid +1;
    for(int i =0; i<len1; i++){
        right[i] = arr[k];
        k++;
    }
    
    //merge logic
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while(leftIndex<len1 && rightIndex<len2){
        if(left[leftIndex]< right[rightIndex]){
            arr[mainArrayIndex++] = left[leftIndex++];
        }

        else{
             arr[mainArrayIndex++] = right[rightIndex++];
        }
    }
    

    //copy logic for left remaining array element

    while(leftIndex<len1){
         arr[mainArrayIndex++] = left[leftIndex++];
    }
   //copy logic for right remaining array element

    while(rightIndex<len2){
         arr[mainArrayIndex++] = right[rightIndex++];
    }
    
}



void mergeSort(int*arr , int s ,int e){
    //base case

    if(s>=e){  //single element s==e or invalid array s>e
        return;
    }

    int mid = (s+e)/2;

    //left sort by RE
    mergeSort(arr , s,mid);

    //right sort by RE
    mergeSort(arr,mid+1,e);

    //merge 2 sorted array

    merge(arr, s , e);

}


int main(){

    int arr[] = {4,5,13,2,12};
    int n =  5;

    int s = 0;
    int e = n-1;
    
    mergeSort(arr,s,e);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}