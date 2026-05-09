#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>nums = {0,1,1,1,0,2,2,0,2,1,2,0};

    int start  = 0 ;
    int end = nums.size() -1; 
    int mid = 0;

    while(start<= end){
        if(nums[mid]== 0 ){
            swap( nums[start],nums[mid]);
            mid++;
            start++;
        } 

        else if(nums[mid] == 1){
           mid++;
        }

        else{
             swap(nums[mid],nums[end]);
             end--;
        }
    }

    for(auto value : nums){
        cout<<value<<" ";
    }
    return 0 ;
}