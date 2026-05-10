#include<iostream>
#include<vector>
using namespace std;


int main(){

int arr[] = {1, 3, 4, 5, 6};
int sizea = 5;

int brr[] = {7 , 9 , 10 , 14 , 16};
int sizeb= 7;

vector<int>ans;
//push all elements of arr in ans
for(int i = 0; i <sizea; i++){
    ans.push_back(arr[i]);
}
//push all elements of brr in ans
for(int i  = 0 ; i<sizeb ; i++){
    ans.push_back(brr[i]);
}
// printing ans array union array
cout<<"printing ans array"<<endl;

for(i = 0 ; i<ans.size() ; i++){
    cout<<ans[i]<<endl;
}
return 0;
}