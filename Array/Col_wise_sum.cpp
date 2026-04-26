#include<iostream>
#include<vector>
using namespace std;


void PrintColWiseSum(int arr[][3], int rows , int cols){
      
    cout<<"printing col wise sum"<<endl;
    
    for(int i = 0 ; i<cols ; i++){
        int sum = 0 ;
        for(int j = 0 ; j<rows ; j++){
           sum = sum + arr[i][j];
        }
        cout<<sum<<endl;
    }
     
}

int main(){

int arr[3][3];    
int rows = 3; 
int cols = 3;
//taking input col wise

for(int i = 0 ; i<cols; i++){
    for(int j = 0 ; j<rows ; j++){
        cin>>arr[i][j];
    }
}
cout<<endl;

//printing col wise 
 for(int i = 0 ; i<cols; i++){
    for(int j = 0 ; j<rows ; j++){
        cout<<arr[i][j]<<" ";
    }
}
cout<<endl;

PrintColWiseSum(arr , rows , cols);
 return 0 ;

}