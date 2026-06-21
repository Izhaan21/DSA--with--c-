#include<iostream>
using namespace std;


int merge(int*arr, int s , int e){
    //length of 2 new array 
    
    int mid = (s+e)/2;
    int len1 = mid - s +1;
    int len2 = e-mid;
    int invCount = 0 ; 
    
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
    for(int i =0; i<len2; i++){
        right[i] = arr[k];
        k++;
    }
    
    //merge logic
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while(leftIndex<len1 && rightIndex<len2){
        if(left[leftIndex]<= right[rightIndex]){
            arr[mainArrayIndex++] = left[leftIndex++];
        }

        else{
             arr[mainArrayIndex++] = right[rightIndex++];
             //inversion logic
             invCount += len1 - leftIndex; 
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

    //delete left
    delete[]left;
    //delete right
    delete[]right;

    return invCount;
    
}



int mergeSort(int*arr , int s ,int e){
    //base case

    if(s>=e){  //single element s==e or invalid array s>e
        return 0;
    }

    int mid = (s+e)/2;

    //left sort by RE
   int leftinv =  mergeSort(arr , s,mid);

    //right sort by RE
   int rightinv =  mergeSort(arr,mid+1,e);

    //merge 2 sorted array

   int invCount = merge(arr, s , e);

   return  leftinv + rightinv + invCount;

}


int main(){

    int arr[] = {1,3,5,10,2,6,8,9};
    int n =  8;

    int s = 0;
    int e = n-1;

    int ans = mergeSort(arr,0,n-1);

    mergeSort(arr,s, e);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    cout<<"Count Inversion"<< ans<<endl;
    return 0;
}