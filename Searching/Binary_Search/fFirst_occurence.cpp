#include<iostream>
#include<vector>
using namespace std;

int firstOcc(vector<int>arr,int target){

    int s = 0;
    int e = arr.size()-1;
    int mid = (s+e)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == target){
            ans =  mid;
             e = mid -1; //left side
        }

        else if(arr[mid]> target){
            e = mid -1;  // left side
        }
        else if(arr[mid]< target) {
            s = mid +1 ; //right side
        }
        mid = (s+e)/2;
    }
    
    return ans;
} 




int  main(){
    vector<int>arr = {1,3,4,4,4,4,4,6,7,9};
    int target = 4;

    int indexoftarget = firstOcc(arr,target);
  
      cout<<"target  found at index" <<" "<<  indexoftarget  <<endl;
    
    return 0 ;
}