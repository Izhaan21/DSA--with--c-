#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>&arr  , int s , int e , int key){
     
    // base case
    if(s>e){
        return -1;
    }

    //1 case solve
   int mid = s + (e - s) / 2;

    if(arr[mid]==key){
        return mid;
    }

    if(arr[mid]<key) {
          return binarySearch(arr, mid+1 , e, key);  //right
    }

    else{
        return binarySearch(arr, s, mid-1 ,key); //left
    }

}


int main(){

    vector<int>arr{10,20,30,50 ,100};
    int key = 120;
    int s = 0;
    int e = arr.size() -1;
  
    int ans = binarySearch(arr,s,e,key);
    if(ans!= -1){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }


return 0;

}