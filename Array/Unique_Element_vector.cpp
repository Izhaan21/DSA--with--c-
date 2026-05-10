#include<iostream>
#include<vector>
using namespace std;


int FindUnique(vector<int>arr){
      
    int ans = 0;
    for(int i = 0 ; i<arr.size();i++){
        ans = ans^arr[i];
    }

    return  ans;

}





int main(){
  int n;
  //taking size from user
  cout<<"enter the size of array"<<endl;
  cin>>n;
  5
  vector<int>arr(n);
  //taking input
  cout<<"Enter the elements of array";

  for(int i = 0 ; i<arr.size() ; i++){
    cin>>arr[i];
  }

  int UniqueElement = FindUnique(arr);

  cout<<"UniqueElement"<<UniqueElement<<endl;
  return 0 ;
}
