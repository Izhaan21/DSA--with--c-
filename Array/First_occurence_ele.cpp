#include<iostream>
using namespace std;

int firstRepeated(int arr[], int n){
    /*/ for(int i = 0; i<n ; i++){
       
        for(int j = i+1 ; j<n ; j++){
            if(arr[i]==arr[j]){
               
               return i+1;
            }

        }
     }

     return -1 */

     // optimized solution 
     unordered_map<int , int >hash;
     for(int i = 0 ; i< n ; i++){
        hash(arr[i])++;
     }

     for(int i = 0; i< n ; i++){
        if(hash[i]>1){
            return i+1;
        }
     }
    return -1;
}


int main(){
       int arr[] = {1,5,3,4,3,5,6};
       int  n = 7;

       return 0 ;
}