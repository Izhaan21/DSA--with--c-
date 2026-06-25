#include<iostream>
using namespace std;

int segments(int n , int x, int y , int z){
    //base case
    if(n==0){
        return 0;
    }
   
 

    // 1case

    if(n<0){
        return INT_MIN;
    }

    int ans1 = segments(n-x, x, y,z) + 1;
    int ans2 = segments(n-y , x, y , z) +1;
    int ans3 = segments(n-z , x, y, z) +1;

   int ans =  max(ans1 , max(ans2 ,ans3));
   return ans;
}

int main(){
int n = 7; 
int x = 5;
int y = 2;
int z = 2;

int finalans = segments(n , x, y, z);
       if(finalans<0){
        finalans = 0;
    }
   cout<<"max segments"<<finalans<<endl;
  return 0;  
}



