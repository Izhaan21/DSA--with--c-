#include<iostream>
#include<vector>
using namespace std;

bool binarySearch( int arr[][3] , int rows , int cols , int target){

    int s = 0; 
    int e = rows*cols - 1; 
    int mid = s + (e-s)/2;

    while(s<=e){
        int rowIndex = mid/cols;
        int colIndex = mid%cols;

        if(arr[rowIndex][colIndex] == target){
            return true;
        }

        else if(arr[rowIndex][colIndex]< target){
            s = mid +1; // right search ;

        }
        else {
            e = mid - 1;
        }    

        mid = s +(e-s)/2;
        }

        return false;
    }



int main(){

    int arr[3][3] = {{1,2,3},
                   {4,5,6},
                   {7,8,9}};
   int rows = 3;
   int cols = 3;
   int target = 8;
   bool ans = binarySearch(arr , rows , cols , target);
   
   if(ans){
    cout<< "found"<<endl;
   }

   else{
    cout<<"not found"<<endl;
   }

   return 0 ;
}