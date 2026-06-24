#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>&arr , int i , int sum , int& maxi){
   
    //base case
    if(i>=arr.size()){
        maxi = max(sum , maxi);
        return;
    }


    //1  case solve

    //inclusion

    solve(arr,i+2, sum+arr[i],maxi);

    //exclusion

    solve(arr,i+1,sum, maxi);

}


int main(){
vector<int>arr{2,4,9,1};    
int maxi = INT_MIN;
int sum = 0;
int i = 0;

solve(arr,i,sum,maxi);

cout<<maxi<<endl;
 return 0;
}