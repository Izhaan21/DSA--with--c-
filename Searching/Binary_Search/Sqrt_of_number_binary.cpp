#include<iostream>
using namespace std;
    int findsqrt(int n){ 
      int  s = 0 ; 
      int e = n ; 
      int ans = -1;
      int mid = s +(e-s)/2;

      while(s<=e){

         if(mid*mid==n){
           return mid;
         }

         else if(mid*mid>n){
            e = mid - 1; //left search 
         }

         
         else{
           ans = mid;
           s= mid +1; // right search 
         }

         mid = s +(e-s)/2;
      }
      return ans ;
    }
int main (){
    int n;
    cout<<"enter no"<< endl;
    cin >> n;
    int ans = findsqrt(n);
    cout << "ans is "<< ans << endl ;

    return 0 ;
}