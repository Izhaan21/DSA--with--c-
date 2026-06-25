#include<iostream>
#include<limits.h>
using namespace std;

void findMax(int arr[], int n , int i , int maxi){
    //base case 
    if(i>=n){
        return ;

    }

    //1 case khud
    if(arr[i]>maxi){
        maxi = arr[i];
    }

    //baaki recursion
    findMax(arr , n , i+1 , maxi);
}

int main(){
int arr[5]  ={2,5,6,8,10};
int n = 5;
int i = 0;
int maxi = INT_MIN;


findMax(arr, n , i , maxi);
cout<<"maximum no"<<maxi<<endl;
return 0;

}