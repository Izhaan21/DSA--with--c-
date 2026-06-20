#include<iostream>
#include<vector>
using namespace std;

bool checkSorted( vector<int>arr,int i , int n ){
    if(i==n-1){
        return false;
    }

    //1 case solve
    if(arr[i+1]<arr[i]){
        return false;
    }

    //baaki recursion
   bool ans = checkSorted(arr,i+1,n);
   return ans;
}

int main(){
vector<int>arr{2,4,56,29,10};
int n = arr.size();
int i = 0;

if(checkSorted(arr, i , n)){
    cout<<"array sorted"<<endl;
}
    
else{
    cout<<"array not sorted"<<endl;
}

return 0;

}